//
// Created by NeTissues on 2020-04-14.
//

#include <stdio.h>
#include <stdlib.h>

//TODO Test to see if this works as intended
void  printEnemyInfo(char enemyName[40]) {

}

void printPlayerInfo(char playerName[40]) {

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
        damageDealt = (actorAttack * (weaponModifier/100)) * 2 - enemyDefense;
        //Fail
    }else if(d20 <= 5){
        damageDealt = 0;
        //Normal attack
    }else{
        damageDealt = (actorAttack + weaponModifier) + rand() % 5 - enemyDefense;
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
void Combat(int enemyAttack, int enemyDefense, int enemyHP, int enemyWeaponModifier, int playerAttack, int playerDefense, int playerHP, int playerWeaponModifier){

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

        //Print the info of the battle actors on the screen
        //TODO Create a function/method to print out the player info and update it when called
        printPlayerInfo();
        printEnemyInfo();

        //Reading the player's choice
        scanf("%i", &combatOption);

        //Switch case
        switch (combatOption) {
            //Attack
            case 1:

                printf("\n\n");

                damageToEnemy = DamageDealtCalculation(playerAttack, playerWeaponModifier, enemyDefense);
                damageToPlayer = DamageDealtCalculation(enemyAttack, enemyWeaponModifier, playerDefense);

                enemyHP = enemyHP - damageToEnemy;
                playerHP = playerHP - damageToPlayer;
                break;

                //Defend
            case 2:

                break;
                //Unknown input handler
            default:
                break;
        }
    }while(enemyHP>=0);
}

int main(){

}