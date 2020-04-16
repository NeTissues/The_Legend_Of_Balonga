//
// Created by NeTissues on 2020-04-14.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Entity{
    char name[40];
    int attack;
    int defense;
    int healthPoints;
    int level;
    int weaponModifier;
};

//TODO Test to see if this works as intended
/**
 * UpdateInfo function
 *
 *  @author NeTissues
 *
 *  Updates an Entity's structure members by replacing the old ones for the variables received as parameters.
 *  If not intending to replace all members, just use the original one as a parameter when calling the function.
 *
 *  @param EntityToBeUpdated - pointer of the original entity to have the values updated
 *  @param newName - The variable to be allocated in the member of the original entity of the same name.
 *  @param newAttack - The variable to be allocated in the member of the original entity of the same name.
 *  @param newDefense - The variable to be allocated in the member of the original entity of the same name.
 *  @param newHealthPoints - The variable to be allocated in the member of the original entity of the same name.
 *  @param newLevel - The variable to be allocated in the member of the original entity of the same name.
 *  @param newWeaponModifier - The variable to be allocated in the member of the original entity of the same name.
 */
void UpdateInfo(struct Entity* EntityToBeUpdated, char newName[40], int newAttack, int newDefense, int newHealthPoints, int newLevel, int newWeaponModifier){
    EntityToBeUpdated->name = newName;
    EntityToBeUpdated->attack = newAttack;
    EntityToBeUpdated->defense = newDefense;
    EntityToBeUpdated->healthPoints = newHealthPoints;
    EntityToBeUpdated->weaponModifier = newWeaponModifier;
}

void printInfo(struct Entity* EntityToBePrinted) {
    printf("---------------------------------------------------------------------------------------\n");
    printf("\tName: %s \t\t lvl: %d\n", EntityToBePrinted->name, EntityToBePrinted->level);
    printf("\tATK: %i \t\t DEF: %i\n", EntityToBePrinted->attack, EntityToBePrinted->defense);
    printf("\tHP: %s\n", EntityToBePrinted->healthPoints);
    printf("---------------------------------------------------------------------------------------\n");
}

void onEnemyDeath() {

}

void onDeath() {

}

/**
 * DamageDealtCalculation function
 *
 *  @author NeTissues
 *
 *  Rolls a number from 1 to 20 to decide the effectiveness of the actor's attack,
 *  and then defines an integer to it based on the roll.
 *
 *  @param actorAttack - the value of an actor's base attack stat.
 *  @param weaponModifier - the modifier added to the damage from the current weapon the actor is currently using.
 *  @param enemyDefense - a flat value to reduce the damage to stronger enemies, used only on crits and normal attacks.
 *
 *  @returns damageDealt - after calculation using the before mentioned parameters with randomization
 */
int DamageDealtCalculation(int actorAttack, int weaponModifier, int enemyDefense){

    //variable declarations
    int damageDealt, d20;

    //d20 is a simulation of a 20 sided dice roll, from 1 to 20
    d20 = rand() % 20 + 1;

    //Then, based on the result of the roll we can treat the attack as being one of the following:
    //Crit, when a 20 is rolled. Fail, When a number between 1 and 5 and a Normal attack with anything else

    //Crit
    if(d20 == 20){
        damageDealt = (actorAttack + (weaponModifier/100)) * 2 - enemyDefense;
        //Fail
    }else if(d20 <= 5){
        damageDealt = 0;
        //Normal attack
    }else{
        damageDealt = (actorAttack + weaponModifier/100) + rand() % 5 - enemyDefense;
    }

    return damageDealt;
}

/**
 * Combat function
 *
 *  @param enemyAttack
 *  @param enemyDefense
 *  @param enemyHP
 *  @param enemyWeaponModifier
 *
 *  @param playerAttack
 *  @param playerDefense
 *  @param playerHP
 *  @param playerWeaponModifier
 */
void Combat(struct Entity* Player, struct Entity* Enemy){

    //variable declarations
    int combatOption, int damageToEnemy, int damageToPlayer;

    do {
        //First, clear the screen so that the player can keep track of what's happening
        //Then, we print out the combat options to the player and a text to show it's a battle
        system("cls");
        printf("-------------------------------------------------------------------------------\n");
        printf("\t\t\t       Choose what to do\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
        printf("-------------------------------------------------------------------------------\n");
        printf("\t\t\t\t    BATTLE\n");

        //Reading the player's choice
        scanf("%i", &combatOption);

        //Print the info of the battle actors on the screen
        printInfo(Player);
        printInfo(Enemy);

        //Switch case
        switch (combatOption) {
            //Attack
            case 1:

                printf("\n\n");

                damageToEnemy = DamageDealtCalculation(Player->attack, Player->weaponModifier, Enemy->defense);
                damageToPlayer = DamageDealtCalculation(Enemy->attack, Enemy->weaponModifier, Player->defense);

                printf("You have dealt %i damage to %s \n", damageToEnemy, Enemy->name);
                printf("You have taken %i damage from %s \n", damageToPlayer, Enemy->name);

                enemyHP = enemyHP - damageToEnemy;
                playerHP = playerHP - damageToPlayer;

                printf("Current player HP: %i \n", playerHP);
                printf("Current enemy HP: %i \n", playerHP);

                //Wait for a user input before clearing the screen
                getch();

                break;

                //Defend
            case 2:

                break;
                //Unknown input handler
            default:
                break;
        }
    }while(enemyHP>=0 || playerHP>=0);
    if (enemyHP <= 0){
        onEnemyDeath();
    }else if (playerHP <= 0){
        onDeath();
    }
}

int main(){

    //Entities declaration
    struct Entity Player;
    struct Entity Dummy;

    //Variables declaration
    char nameVariable[40];

    printf("*Insert useless lore that no one reads here*\n");
    getch(); //Wait for a user input
    printf("Insert your character's name\n");
    gets(nameVariable);

    //TODO re-do this
    //Entities specification
    /*
     * Player specification
    */
    strcpy( Player.name, nameVariable);
    Player.attack = 5;
    Player.defense = 0;
    Player.healthPoints = 100;
    Player.weaponModifier = 0;
    //-----------------------------------------
    /*
     * Dummy specification
    */
    strcpy( Dummy.name, "Target Dummy");
    Dummy.attack = 0;
    Dummy.defense = 0;
    Dummy.healthPoints = 100;
    Dummy.weaponModifier = 0;

    Combat(Player, Dummy);
}
