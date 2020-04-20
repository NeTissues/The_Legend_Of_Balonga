//
// Created by NeTissues on 2020-04-14.
//
//TODO Search: Is it better to separate the multiple combat options into separate functions or leave them as one?

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Entity{
    char name[40];
    int attack;
    int defense;
    float experience; //Does it even make sense for a non playable Entity to have experience?
    int healthPoints;
    int level;
    int weaponModifier;
} Entity;
//TODO Think: how to go about creating a new struct for weapons for a more diverse combat && if it is even worth it.

//TODO Create a character customisation with attributes.

/**
 * UpdateInfo function
 *
 *  @author NeTissues
 *
 *  Updates an Entity's structure members by replacing the old ones for the variables received as parameters.
 *  If not intending to replace all members, just use the original one as a parameter when calling the function.
 *
 *  @param EntityToBeUpdated - Pointer of the original entity to have the values updated
 *  @param newName - The variable to be allocated in the member of the original entity of the same name.
 *  @param newAttack - The variable to be allocated in the member of the original entity of the same name.
 *  @param newDefense - The variable to be allocated in the member of the original entity of the same name.
 *  @param newHealthPoints - The variable to be allocated in the member of the original entity of the same name.
 *  @param newLevel - The variable to be allocated in the member of the original entity of the same name.
 *  @param newWeaponModifier - The variable to be allocated in the member of the original entity of the same name.
 */
void UpdateInfo(Entity* EntityToBeUpdated, char newName[40], int newAttack, int newDefense, float newExperience, int newHealthPoints, int newLevel, int newWeaponModifier){//TODO Delete this if kept unused.
    strcpy(EntityToBeUpdated->name, newName);
    EntityToBeUpdated->attack = newAttack;
    EntityToBeUpdated->defense = newDefense;
    EntityToBeUpdated->experience = newExperience;
    EntityToBeUpdated->healthPoints = newHealthPoints;
    EntityToBeUpdated->level = newLevel;
    EntityToBeUpdated->weaponModifier = newWeaponModifier;
}

void LevelUp(Entity* Player){
    Player->attack += 1;
    Player->defense +=1;

}

void ExperienceGain(Entity* Player){
    //Add 1 to the Player experience
    Player->experience += 1;
    //Check if the experience has reached the goal needed for a level up
    if(Player->experience >=3){
        Player->level +=1;
        LevelUp();
    }
}

/**
 *  PrintInfo function
 *
 *  @author NeTissues
 *
 *  Prints an Entity's Name, Health Points, Level, Attack and Defense in a formatted form.
 *  Meant to be used on Combat()
 *
 *  @param EntityToBePrinted - Pointer of the entity to have it's parameters (not all) printed.
 *
 */
void PrintInfo(Entity* EntityToBePrinted) {
    printf("-------------------------------------------------------------------------------\n");
    printf("\tName: %s \t\t lvl: %d\n", EntityToBePrinted->name, EntityToBePrinted->level);
    printf("\tATK: %i \t\t DEF: %i\n", EntityToBePrinted->attack, EntityToBePrinted->defense);
    printf("\tHP: %i\n", EntityToBePrinted->healthPoints);
    printf("-------------------------------------------------------------------------------\n");
}

/**
 * OnEnemyDeath function
 *
 * @author NeTissues
 *
 *
 *
 */
void OnEnemyDeath(Entity* Player) {
    //TODO Create exp gain system.
    printf("Enemy died\n");
    ExperienceGain(Player);
}

/**
 * OnDeath function
 *
 * @author NeTissues
 *
 *
 *
 */
void OnDeath() {
    //TODO Create a checkpoint system to resume the game at after player death.
    printf("Player died\n");
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
        damageDealt = ((actorAttack + (weaponModifier/100)) * 2) - enemyDefense;
        //Fail
    }else if(d20 <= 2){
        damageDealt = 0;
        //Normal attack
    }else{
        damageDealt = ((actorAttack + weaponModifier/100) + rand() % 5) - enemyDefense;
    }

    return damageDealt;
}//TODO Create a new function for making complex attack patterns for enemies and handling multiple combat options for them.

/**
 * Combat function
 *
 *  @author NeTissues
 *
 *
 *
 *  @param Player -
 *  @param Enemy -
 *
 */
void Combat(Entity* Player, Entity* Enemy){//TODO Finish this

    //variable declarations
    int combatOption, damageToEnemy, damageToPlayer;

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

        //Print the info of the battle actors on the screen
        PrintInfo(Player);
        PrintInfo(Enemy);

        //Reading the player's choice
        scanf("%i", &combatOption);


        //Switch case
        switch (combatOption) {
            //Attack
            case 1:

                printf("\n\n");

                damageToEnemy = DamageDealtCalculation(Player->attack, Player->weaponModifier, Enemy->defense);
                damageToPlayer = DamageDealtCalculation(Enemy->attack, Enemy->weaponModifier, Player->defense);

                printf("You have dealt %i damage to %s \n", damageToEnemy, Enemy->name);
                printf("You have taken %i damage from %s \n", damageToPlayer, Enemy->name);

                Enemy->healthPoints -= damageToEnemy;
                Player->healthPoints -= damageToPlayer;

                //Wait for a user input before clearing the screen
                system("pause");

                break;

                //Defend
                //TODO think about implementing power strikes.
            case 2:
                //TODO Finish implementing defense option.
                break;
                //Unknown input handler
            default:
                break;
        }
    }while(Enemy->healthPoints>=0 && Player->healthPoints>=0);

    if (Enemy->healthPoints <= 0){
        OnEnemyDeath(Player);
    }else if (Player->healthPoints <= 0){
        OnDeath();
    }
}

int main(){

    //Entities declaration
    Entity* Player;
    Player = malloc(sizeof(Entity));

    Entity* Dummy;
    Dummy = malloc(sizeof(Entity));

    //Variables declaration
    char nameVariable[40];

    printf("*Insert useless lore that no one reads here*\n");
    //Wait for a user input
    system("pause");
    printf("Insert your character's name\n");
    gets(nameVariable);

    //Entities specification
    /*
     * Player specification
    */
    strcpy( Player->name, nameVariable);
    Player->attack = 5;
    Player->defense = 0;
    Player->experience = 0;
    Player->healthPoints = 100;
    Player->level = 1;
    Player->weaponModifier = 10;
    //-----------------------------------------
    /*
     * Dummy specification
    */
    strcpy( Dummy->name, "Target Dummy");
    Dummy->attack = 0;
    Dummy->defense = 0;
    Dummy->experience = 0;
    Dummy->healthPoints = 100;
    Dummy->level = 0;
    Dummy->weaponModifier = 0;
    //-----------------------------------------

    Combat(Player, Dummy);
    printf("%i", Player->healthPoints);
    //Freeing memory allocations after last use.
    free(Player);
    free(Dummy);
}
