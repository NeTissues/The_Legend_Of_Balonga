#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

/* void Datk(int atk){
      atk=10;

      return(atk);}
 float Ddef (float a, float b){
           return(a-b);}
 float Dhp(float a,float b){
           return(a*b);}
 float Dmp(float a, float b){
               return(a/b);}
 int aleatorio(int a)
  {
  a = rand() % 10;
  return(a);

 }*/

main()
{     int i, x, z, y, w, n, m, o, j, l, g, d, v, vlg =0,lge;
      int ATK=10, DEF=10, HP=100, MP=100, lvl=1, CHP, EnmHP, clvl, Dmg, Mcost, Cmana, ENMhp=100, ENMmp=100, cENMhp, cENMmp, ENMdef, ENMatk, ENMdmg;
      char nick[40];

  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  printf("\t\t\t    The Legend Of Balonga\n");
  printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
  printf("-------------------------------------------------------------------------------\n");
  printf("Type your Character's Nickname:\n");
  gets(nick);
  printf("-------------------------------------------------------------------------------\n");
  printf("Choose your Breed:\n\t1 - Orc(+5atk)\n\t2 - Human(+2atk & +2def)\n\t3 - Elf(+5def)\n\t4 - LoL Pro Player(-5def Because of weakness +10atk Because of Rage)\n");
  printf("-------------------------------------------------------------------------------\n");
  printf(" IMPORTANT: * = when you're thinking about it(option choosing)\n");
  printf(" IMPORTANT v.2 Press any key to continue the dialog, but be careful there are some typing parts\n");

  scanf("%i", &x);

        switch(x)
        {
                 case 1:   for(i=0;i<22;i++){
                           printf("\n");
                                            }
                           printf("-------------------------------------------------------------------------------\n");
                           printf("Stranger: Hey you, wake up\n");getch();
                           ATK = ATK + 5;
                           printf("Stranger: You're in Baltahan, the Orc camp\n");getch();
                           printf("Stranger: We need to get ready to the invasion\n");getch();
                           printf("Stranger: Get an weapon on the wall\n");getch();
                           printf("\n\n");
                           printf ("Choose a weapon: \n\t1 - Sword(+4 atk)\n\t2 - Waraxe(+5 atk)\n");
                           scanf("%i", &n);

                                           switch(n){
										   
                                            
                                              case 1: ATK = ATK+ 4;
                                                      printf("\n\nstranger: great you take the sword\n");getch();
                                                      printf("stranger: now let`s go\n");getch();
                                                      printf("stranger: you need to train with the sword\n");getch();
                                                      printf("\t*(Wich way should I go?)*\n");getch();
                                                      printf("\n\t1- Train\n\t2-Skip Train\n");
                                                      scanf("%i",&m);
                                                       switch(m)
                                                       {
                                                         case 1:  for(i=0;i<22;i++){
                                                                 printf("\n");
                                                                                   }
                                                                 printf("\t\t\t             ENEMY:\n");
                                                                 printf("\t\t\t         Target Dummy\n");
                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
                                                                 cENMhp = ENMhp;
                                                                 do{
                                                                         system("cls");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t       Choose what to do\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t\t    BATTLE\n");

                                                                 scanf("%i", &o);
                                                                       switch(o)
                                                                               {
                                                                                       case 1:

                                                                                                printf("################################################################################\n");
                                                                                                printf("lvl = 1\n");
                                                                                                printf("%s\n", nick);
                                                                                                ENMdef = 10;
                                                                                                Dmg = ATK + rand() % 12 - ENMdef;
                                                                                                CHP = HP; //- Dmg;
                                                                                                Mcost = 10;
                                                                                                Cmana = MP - Mcost + 5;
                                                                                                printf("HP = %i\n", CHP);
                                                                                                printf("Mana = %i\n", Cmana);
                                                                                                for(i=0;i<4;i++){
                                                                                                printf("\n");
                                                                                                                 }
                                                                                                if(Dmg >= 2*ATK){
                                                                                                                printf("you have delt %i Damage to Target Dummy on a CRITICAL HIT\n\n\n\n", Dmg);
                                                                                                                }
                                                                                                else{
                                                                                                                printf("you have delt %i Damage to Target Dummy on a Normal hit\n\n\n\n", Dmg);
                                                                                                    }
                                                                                                printf("ENEMY:\n");
                                                                                                printf("lvl = %d \n", rand() %6);
                                                                                                printf("Target Dummy\n");

                                                                                                cENMhp = cENMhp - Dmg;
                                                                                                printf("HP = %i\n", cENMhp);
                                                                                                printf("MP = %i\n", Cmana);
                                                                                                  getch();

                                                                                             for(i=0;i<24;i++){
                                                                                                printf("\n");

                                                                                                              }




                                                                               }
                                                                               }while(cENMhp>=0);
                                                                               if(cENMhp<=0)
                                                                               {

                                                                                 system("cls");
                                                                                   printf("\t\t\t\tTarget Dummy has been defeated\n");getch();
                                                                                   printf("\t\t\t\t100%% XP Earned\n");getch();
                                                                                   Sleep(500);
                                                                                    printf("\t\t\t\t|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|\n");Sleep(100);

                                                                                   printf("\t\t\t\t^ LEVEL UP ^ \n");getch();
                                                                                   clvl = lvl + 1;
                                                                                   printf("\t\t\t\tYou're Now on lvl:%i!\n", clvl);getch();
                                                                                   printf("\t\t\t\tYou got stronger(+3atk)\n");getch();
                                                                                   ATK = ATK + 3;
                                                                               }
                                                                          
                                               case 2: printf("\nStranger: Ok let's go\n\n ");getch();
                                                      printf("\nStranger: we have to find a way to lower the castle bridge to cross the river ");
                                                      printf("\t\n\tYou and the stranger go to the stables and take two horses\n");getch();
                                                      printf("\tAfter some time traveling,you and the stranger come to Cyrennica\n");getch();
                                                      printf("\t\n\tYou go into a tavern\n");getch();
                                                      printf("\t\n\tA drunk Villager come to you and punch your face\n\n");getch();
                                                      printf("Villager: Go away dirty orc\n");getch();
                                                      printf("\t\t\n*(What did you do?)*\n");getch();
                                                      printf ("Choose: \n\t1 - Brawl\n\t2 - ignore\n");getch();
                                                      scanf("%i", &j);
                                                               switch(j)
                                                       {
                                                         case 1:  for(i=0;i<22;i++){
                                                                 printf("\n");
                                                                                   }
                                                                 printf("\t\t\t             ENEMY:\n");
                                                                 printf("\t\t\t        Drunk Villager \n");
                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
                                                                 cENMhp = ENMhp;
                                                                	CHP = HP;
                           											ENMdmg = 5 + rand () % 5;
                                                                 do{
                                                                        system("cls");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t       Choose what to do\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t\t    BATTLE\n");
                                                        	    
                                                                scanf("%i", &o);
                                                                       switch(o)
                                                                               {
                                                                                       case 1:printf("################################################################################\n");
                                                    												clvl = lvl;
                                                    												printf("lvl = %i\n", clvl);
                                                                                					printf("%s\n", nick);
                                                                                					ENMdef = 10;
                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
                                                                                					CHP = CHP - ENMdmg;
                                                                                					Mcost = 10;
                                                                                					Cmana = MP - Mcost + 5;
                                                                                					printf("HP = %i\n", CHP);
                                                                                					printf("Mana = %i\n", Cmana);
                                                                                					for(i=0;i<4;i++){
                                                                                    					printf("\n");
                                                                                    									}
                                                                                                  
                                                                                                  
                                                                                                  	if(Dmg >= 2*ATK){
                                                                                									printf("you have delt %i Damage to the Guard on a CRITICAL HIT\n\n\n\n", Dmg);
                                                                                                					}
                                                                                					else{
                                                                                						printf("you have delt %i Damage to the Guard on a Normal hit\n\n\n\n", Dmg);
                                                                                    					}
                                                                                					if(CHP < HP)	
                                                                                								{
                                                                                								printf(" The Guard delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
                                                    															}
                                                    												else
                                                    													{
                                                    													printf("You have dodged the Guard's' Attack");
                                                    													
                                                    													}

                                                                                                   	printf("ENEMY:\n");
                                                                                					printf("lvl = 5\n");
                                                                               						// %d \n", rand() %6);
                                                                                					printf("Cyrennica Guard\n");
                                                    												cENMhp = cENMhp - Dmg;
                                                                                					printf("HP = %i\n", cENMhp);
                                                                                					printf("MP = %i\n", Cmana);
                                                                                					getch();
                                                                                            		if(CHP<=0)
                                                                								   { system("cls");
                                                                                                     printf("\n\n You are dead"); getch();
                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
                                                                                                     exit(0);
                                                                                                             }
                                                                                                   else continue;
                                                                                                    break;
                                                                                        case 2:     ENMdmg = 0;
																									printf("################################################################################\n");
																									Dmg = 0;
																									clvl = lvl;
																									printf("lvl = %i\n", clvl);
													                            					printf("%s\n", nick);
													                            					ENMdef = 0;
													                            					Dmg = ATK + rand() % 12 - ENMdef;
													                            					CHP = CHP- ENMdmg;
													                            					Mcost = 10;
													                            					Cmana = MP - Mcost + 5;
													                            					printf("HP = %i\n", CHP);
													                            					printf("Mana = %i\n", Cmana);
													                                                
													                            
													                            					for(i=0;i<4;i++){
													                            					printf("\n");
													                            									}
													                            
													                            
													                            					if(Dmg >= 2*ATK){
													                            									printf("you have delt %i Damage to the Guard on a CRITICAL HIT\n\n\n\n", Dmg);
													                                           		 				}
													                            					else if(Dmg = 0){
													                            									printf("You have successfully defended the guard's attack");
													                            									}
													                            					else{
																				
													                            						printf("you have delt %i Damage to the guard on a Normal hit\n\n\n\n", Dmg);
													                                					}
													                           	 					if(CHP < HP)	
													                            						{
													                            						printf("The Guard delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																										}
																									else
																										{
																										printf("You have dodged the Guard's' Attack");
																										}
													                                
																					            	printf("ENEMY:\n");
													                            					printf("lvl = 5\n");
													                           						// %d \n", rand() %6);
													                            					printf("Cyrennica Guard\n");
																									cENMhp = cENMhp - Dmg;
													                            					printf("HP = %i\n", cENMhp);
													                            					printf("MP = %i\n", Cmana);
													                                            
													                                            getch();
																								   if(CHP<=0)
																								   { system("cls");
																                                     printf("\n\n You are dead"); getch();
																                                     printf("\n\nTHANKS FOR PLAYING");getch();
																                                     exit(0);
																                                             }
																                                   else continue;
																                                
																                                	break;
																						default:
																								printf("That's not a valid option");                     



                                                                              
                                                                              }
                                                                         }while(cENMhp>=0);
                                                                                   printf("\t\t\t\tVillager has been defeated\n");getch();
                                                                                   vlg=1;
																				   Sleep(500);
                                                                                    printf("\t\t\t\t|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|\n");Sleep(100);
                                                                         
																		  //break;

                                                                                        case 2 : system ("cls");
																						if (vlg==0)
																						{ printf("\n You ignore the villager ");getch();
																						 printf("\n stranger: good decision");getch();
																						  //continue;	
																						} 
																						    if (vlg ==1){
																							printf("\n Innkeeper: Hey orc");getch();
																							printf("Innkeaper :if you fight again in my tavern you'll be expelled");getch();
																							printf("\n %s It's ok",nick);getch();
																							printf("\nstranger: what are you doing ?");getch();
																							printf("\nstranger: We did not come here to fight");getch();
																							printf("\nstranger:We came to pick up information");getch();
																						//	continue;
																							}
																						 
																						    
                                                                                                 printf("\nStranger :Our informant is right there");
                                                                                                 printf(" \t\n\nChoose:\t1- take a beer \t2- interrogate informant\n"); getch();
                                                                                                 scanf("%i", &l);

                                                                                                   switch(l)
                                                                                                   { case 1: printf("\t\n beer harms your senses"); getch();
                                                                                                                 CHP = CHP - 5;
                                                                                                                 Cmana = Cmana - 5;
                                                                                                                 Dmg = Dmg - 5;
                                                                                                             printf("\t\n Your Hp , Mp and ATK reduce in 5 points "); getch();
                                                                                                             printf("\t\n I have been banned for being drunk "); getch();
                                                                                                             printf("\t\n You fall sleep on the floor"); getch();
                                                                                                             printf("\t\n You  wake up in the next day"); getch();
                                                                                                             printf("\n Stranger: wake up ");getch();
                                                                                                             printf("\n Stranger: You were kicked out of the tavern for fighting"); getch();
                                                                                                             printf("\n Stranger: We didn't get the information"); getch();
                                                                                                             printf("\n\n\t You gets angry and decides to initiate the invasion");getch();
                                                                                                             printf("\n Stranger: what we will do now");getch();
                                                                                                             printf("\n\t\n\nChoose:\t1- invade the castle \t2- Call the army \n"); getch();
                                                                                                             scanf(" %i", &g);
                                                                                                             
                                                                                                                  switch(g){ case 1:  printf(" \n stranger: ok lets go ");getch();
                                                                                                                                      printf("\n  stranger :we will have to use the underground entries "); getch();
                                                                                                                                      printf("\n  stranger :I know one of them, but they are a full of strange creatures");getch();
                                                                                                                                      printf("\n  stranger: follow me");getch();
                                                                                                                                      printf("\n\tYou and stranger going to the entrance");getch();
                                                                                                                                      printf("\n\t You see a lever");getch();
                                                                                                                                      printf(" \t\n\nChoose:\t1- pull \t2- Continue \n"); getch();
                                                                                                                                      scanf("%i", &d);
                                                                                                                                            switch(d)
                                                                                                                                                { case 1: printf("\n\t you pull the lever and open an iron door");getch();
                                                                                                                                                          printf("\n\t inside was a troll");getch();
                                                                                                                                                          printf("\n\t the starts walking towards you");getch();
                                                                                                                                                          printf("\n\t he grab you and throw you against the wall");getch();
                                                                                                                                                          printf(" \n\t   holds his head and smashes it");getch();
                                                                                                                                                          printf("\t\t\n The end");getch();
                                                                                                                                                          printf("ztztznThanks for playing");getch();
                                                                                                                                                           break;

                                                                                                                                                  case 2: system("cls");
                                                                                                                                                         printf("\n\n\tYou continue to walk and come to the top of the castle"); getch();
                                                                                                                                                         printf("\n\n Captain Reinald: Hey stop right there!");getch();
                                                                                                                                                         printf("\n\n Stranger: Go to the king");getch();
                                                                                                                                                         printf("\n\n Stranger: I fight with the guards");getch();
                                                                                                                                                         printf("\n\nKing Alec:come here orc  ");getch();
                                                                                                                                                           for(i=0;i<22;i++){
                                                                                                                                                             printf("\n");
                                                                                                                                                                               }
                                                                                                                                                             printf("\t\t\t             ENEMY:\n");
																	                                                                 printf("\t\t\t           King Alec \n");
																	                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
																	                                                                 cENMhp = ENMhp;
																	                                                                	CHP = HP;
																	                           											ENMdmg = 5 + rand () % 10;
																	                                                                 do{
																	                                                                        system("cls");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\t\t\t       Choose what to do\n");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\t\t\t\t    BATTLE\n");
																	                                                        	    
																	                                                                scanf("%i", &o);
																	                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                  system("cls");
													                                                                                   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");
													                                                                                   vlg=1;
																																	   Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
													                                                                               
																																   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
																																   printf("\t\t\t\tThanks for playing");getch();
																															       break;


                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     }
                                                                                                            case 2: system("cls");
																											printf("\t\t\t Location: Cyrennica");getch();
																											printf("\n-------------------------------------------------------------------------------");
																											printf("\n\n\n\n %s: My warriors. It is time to take revenge on you for everything that these humans did us",nick);
																											printf("\n %s:Honor our people",nick);getch();
																											printf("\n %s:the invasion begins NOW",nick);getch();
																											printf("\n\n\t preparing the catapult");getch();
																										    printf("\n %s: FIRE",nick);getch();
																										    printf("\n\t the catapult shot destroys the mechanism of bridge");getch();
																											printf("\n\tthe bridge is lowered");getch();
																											printf("\n %s:GO",nick);getch();
																											printf("\n\tYou run towards the castle with bloodlust"); getch();
																											printf("\n\tPasses by enemy troops and goes straight to the king");getch();
																											system("cls");
																											        printf("\t\t\t             ENEMY:\n");
													                                                                 printf("\t\t\t           King Alec \n");
													                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
													                                                                 cENMhp = ENMhp;
													                                                                	CHP = HP;
													                           											ENMdmg = 5 + rand () % 10;
													                                                                 do{
													                                                                        system("cls");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t       Choose what to do\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t\t    BATTLE\n");
													                                                        	    
													                                                                scanf("%i", &o);
													                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                   system("cls");
																																	   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
													                                                                                    Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
																																	   
													                                                                               printf("\t\t\t\tThanks for playing");getch();
																															  
                                                                                                                        }
                                                                                                                     break;
                                                                                                                            
                                                                                                                            
                                                                                                                            
                                                                                                                            
                                                                                                                           











                                                                                                    case 2:
																									        printf("\t\n\tYou walk toward the informant");getch();
                                                                                                            printf("\nInformant:finally you arrived"); getch();
                                                                                                            printf("\nInformant:I have the solution for your problems"); getch();
                                                                                                            printf("\n%s :what exactly?",nick);getch();
                                                                                                            printf("\ninformant: Hippogriffs");getch();
                                                                                                            printf("\nstranger: Perfect");getch();
                                                                                                            printf("\nstranger: with it we can send air forces to infiltrate and take down the drawbridge of the castle"); getch();
                                                                                                            printf("\n%s:I buy them",nick);getch();
                                                                                                            printf("\ninformant:Go to the location contained in this map. I'll be there waiting");getch();
                                                                                                            printf("\n\t\t You leave the tavern and go to the location");getch();
                                                                                                            printf("\n\talong the way you send a message by calling the army");getch();
                                                                                                            printf("\n\t Arriving on site you spot the army ");getch();
                                                                                                            printf("\n\t You and your army take the Hippogriff and go for the invasion");getch();
                                                                                                            system("cls");
																											printf("\t\t\t Location: Cyrennica");getch();
																											printf("\n-------------------------------------------------------------------------------");
																											printf("\n\n\n\n %s: My warriors. It is time to take revenge on you for everything that these humans did us",nick);
																											printf("\n %s:Honor our people",nick);getch();
																											printf("\n %s:the invasion begins NOW",nick);getch();
																											printf("\n\n\t Air troops attack the castle without giving chance for the opponents");getch();
																											printf("\n\tthe bridge is lowered");getch();
																											printf("\n\tYou run towards the castle with bloodlust"); getch();
																											printf("\n\tPasses by enemy troops and goes straight to the king");getch();
																											system("cls");
																											         printf("\t\t\t             ENEMY:\n");
													                                                                 printf("\t\t\t           King Alec \n");
													                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
													                                                                 cENMhp = ENMhp;
													                                                                	CHP = HP;
													                           											ENMdmg = 5 + rand () % 10;
													                                                                 do{
													                                                                        system("cls");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t       Choose what to do\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t\t    BATTLE\n");
													                                                        	    
													                                                                scanf("%i", &o);
													                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                   system("cls");
																																	   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
													                                                                                    Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
																																	   
													                                                                               printf("\t\t\t\tThanks for playing");getch();
																															  break;

                                                                                                   }









                                                       }









                                                      }
                                                      break;
                                                      case 2: ATK = ATK+ 5;
                                                      printf("\n\nstranger: great you take the Waraxe\n");getch();
                                                      printf("stranger: now let`s go\n");getch();
                                                      printf("stranger: you need to train with the sword\n");getch();
                                                      printf("\t*(Wich way should I go?)*\n");getch();
                                                      printf("\n\t1- Train\n\t2-Skip Train\n");
                                                      scanf("%i",&m);
                                                       switch(m)
                                                       {
                                                         case 1:  for(i=0;i<22;i++){
                                                                 printf("\n");
                                                                                   }
                                                                 printf("\t\t\t             ENEMY:\n");
                                                                 printf("\t\t\t         Target Dummy\n");
                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
                                                                 cENMhp = ENMhp;
                                                                 do{
                                                                         system("cls");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t       Choose what to do\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t\t    BATTLE\n");

                                                                 scanf("%i", &o);
                                                                       switch(o)
                                                                               {
                                                                                       case 1:

                                                                                                printf("################################################################################\n");
                                                                                                printf("lvl = 1\n");
                                                                                                printf("%s\n", nick);
                                                                                                ENMdef = 10;
                                                                                                Dmg = ATK + rand() % 12 - ENMdef;
                                                                                                CHP = HP; //- Dmg;
                                                                                                Mcost = 10;
                                                                                                Cmana = MP - Mcost + 5;
                                                                                                printf("HP = %i\n", CHP);
                                                                                                printf("Mana = %i\n", Cmana);
                                                                                                for(i=0;i<4;i++){
                                                                                                printf("\n");
                                                                                                                 }
                                                                                                if(Dmg >= 2*ATK){
                                                                                                                printf("you have delt %i Damage to Target Dummy on a CRITICAL HIT\n\n\n\n", Dmg);
                                                                                                                }
                                                                                                else{
                                                                                                                printf("you have delt %i Damage to Target Dummy on a Normal hit\n\n\n\n", Dmg);
                                                                                                    }
                                                                                                printf("ENEMY:\n");
                                                                                                printf("lvl = %d \n", rand() %6);
                                                                                                printf("Target Dummy\n");

                                                                                                cENMhp = cENMhp - Dmg;
                                                                                                printf("HP = %i\n", cENMhp);
                                                                                                printf("MP = %i\n", Cmana);
                                                                                                  getch();

                                                                                             for(i=0;i<24;i++){
                                                                                                printf("\n");

                                                                                                              }




                                                                               }
                                                                               }while(cENMhp>=0);
                                                                               if(cENMhp<=0)
                                                                               {

                                                                                 system("cls");
                                                                                   printf("\t\t\t\tTarget Dummy has been defeated\n");getch();
                                                                                   printf("\t\t\t\t100%% XP Earned\n");getch();
                                                                                   Sleep(500);
                                                                                    printf("\t\t\t\t|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|\n");Sleep(100);

                                                                                   printf("\t\t\t\t^ LEVEL UP ^ \n");getch();
                                                                                   clvl = lvl + 1;
                                                                                   printf("\t\t\t\tYou're Now on lvl:%i!\n", clvl);getch();
                                                                                   printf("\t\t\t\tYou got stronger(+3atk)\n");getch();
                                                                                   ATK = ATK + 3;
                                                                               }
                                                                          
                                               case 2: printf("\nStranger: Ok let's go\n\n ");getch();
                                                      printf("\nStranger: we have to find a way to lower the castle bridge to cross the river ");
                                                      printf("\t\n\tYou and the stranger go to the stables and take two horses\n");getch();
                                                      printf("\tAfter some time traveling,you and the stranger come to Cyrennica\n");getch();
                                                      printf("\t\n\tYou go into a tavern\n");getch();
                                                      printf("\t\n\tA drunk Villager come to you and punch your face\n\n");getch();
                                                      printf("Villager: Go away dirty orc\n");getch();
                                                      printf("\t\t\n*(What did you do?)*\n");getch();
                                                      printf ("Choose: \n\t1 - Brawl\n\t2 - ignore\n");getch();
                                                      scanf("%i", &j);
                                                               switch(j)
                                                       {
                                                         case 1:  for(i=0;i<22;i++){
                                                                 printf("\n");
                                                                                   }
                                                                 printf("\t\t\t             ENEMY:\n");
                                                                 printf("\t\t\t        Drunk Villager \n");
                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
                                                                 cENMhp = ENMhp;
                                                                	CHP = HP;
                           											ENMdmg = 5 + rand () % 5;
                                                                 do{
                                                                        system("cls");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t       Choose what to do\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
                                                                 printf("-------------------------------------------------------------------------------\n");
                                                                 printf("\t\t\t\t    BATTLE\n");
                                                        	    
                                                                scanf("%i", &o);
                                                                       switch(o)
                                                                               {
                                                                                       case 1:printf("################################################################################\n");
                                                    												clvl = lvl;
                                                    												printf("lvl = %i\n", clvl);
                                                                                					printf("%s\n", nick);
                                                                                					ENMdef = 10;
                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
                                                                                					CHP = CHP - ENMdmg;
                                                                                					Mcost = 10;
                                                                                					Cmana = MP - Mcost + 5;
                                                                                					printf("HP = %i\n", CHP);
                                                                                					printf("Mana = %i\n", Cmana);
                                                                                					for(i=0;i<4;i++){
                                                                                    					printf("\n");
                                                                                    									}
                                                                                                  
                                                                                                  
                                                                                                  	if(Dmg >= 2*ATK){
                                                                                									printf("you have delt %i Damage to the Guard on a CRITICAL HIT\n\n\n\n", Dmg);
                                                                                                					}
                                                                                					else{
                                                                                						printf("you have delt %i Damage to the Guard on a Normal hit\n\n\n\n", Dmg);
                                                                                    					}
                                                                                					if(CHP < HP)	
                                                                                								{
                                                                                								printf(" The Guard delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
                                                    															}
                                                    												else
                                                    													{
                                                    													printf("You have dodged the Guard's' Attack");
                                                    													
                                                    													}

                                                                                                   	printf("ENEMY:\n");
                                                                                					printf("lvl = 5\n");
                                                                               						// %d \n", rand() %6);
                                                                                					printf("Cyrennica Guard\n");
                                                    												cENMhp = cENMhp - Dmg;
                                                                                					printf("HP = %i\n", cENMhp);
                                                                                					printf("MP = %i\n", Cmana);
                                                                                					getch();
                                                                                            		if(CHP<=0)
                                                                								   { system("cls");
                                                                                                     printf("\n\n You are dead"); getch();
                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
                                                                                                     exit(0);
                                                                                                             }
                                                                                                   else continue;
                                                                                                    break;
                                                                                        case 2:     ENMdmg = 0;
																									printf("################################################################################\n");
																									Dmg = 0;
																									clvl = lvl;
																									printf("lvl = %i\n", clvl);
													                            					printf("%s\n", nick);
													                            					ENMdef = 0;
													                            					Dmg = ATK + rand() % 12 - ENMdef;
													                            					CHP = CHP- ENMdmg;
													                            					Mcost = 10;
													                            					Cmana = MP - Mcost + 5;
													                            					printf("HP = %i\n", CHP);
													                            					printf("Mana = %i\n", Cmana);
													                                                
													                            
													                            					for(i=0;i<4;i++){
													                            					printf("\n");
													                            									}
													                            
													                            
													                            					if(Dmg >= 2*ATK){
													                            									printf("you have delt %i Damage to the Guard on a CRITICAL HIT\n\n\n\n", Dmg);
													                                           		 				}
													                            					else if(Dmg = 0){
													                            									printf("You have successfully defended the guard's attack");
													                            									}
													                            					else{
																				
													                            						printf("you have delt %i Damage to the guard on a Normal hit\n\n\n\n", Dmg);
													                                					}
													                           	 					if(CHP < HP)	
													                            						{
													                            						printf("The Guard delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																										}
																									else
																										{
																										printf("You have dodged the Guard's' Attack");
																										}
													                                
																					            	printf("ENEMY:\n");
													                            					printf("lvl = 5\n");
													                           						// %d \n", rand() %6);
													                            					printf("Cyrennica Guard\n");
																									cENMhp = cENMhp - Dmg;
													                            					printf("HP = %i\n", cENMhp);
													                            					printf("MP = %i\n", Cmana);
													                                            
													                                            getch();
																								   if(CHP<=0)
																								   { system("cls");
																                                     printf("\n\n You are dead"); getch();
																                                     printf("\n\nTHANKS FOR PLAYING");getch();
																                                     exit(0);
																                                             }
																                                   else continue;
																                                
																                                	break;
																						default:
																								printf("That's not a valid option");                     



                                                                              
                                                                              }
                                                                         }while(cENMhp>=0);
                                                                                   printf("\t\t\t\tVillager has been defeated\n");getch();
                                                                                   vlg=1;
																				   Sleep(500);
                                                                                    printf("\t\t\t\t|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|");Sleep(100);

                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);
                                                                                   printf(":");Sleep(100);

                                                                                    printf("|\n");Sleep(100);
                                                                         
																		  //break;

                                                                                        case 2 : system ("cls");
																						if (vlg==0)
																						{ printf("\n You ignore the villager ");getch();
																						 printf("\n stranger: good decision");getch();
																						  //continue;	
																						} 
																						    if (vlg ==1){
																							printf("\n Innkeeper: Hey orc");getch();
																							printf("Innkeaper :if you fight again in my tavern you'll be expelled");getch();
																							printf("\n %s It's ok",nick);getch();
																							printf("\nstranger: what are you doing ?");getch();
																							printf("\nstranger: We did not come here to fight");getch();
																							printf("\nstranger:We came to pick up information");getch();
																						//	continue;
																							}
																						 
																						    
                                                                                                 printf("\nStranger :Our informant is right there");
                                                                                                 printf(" \t\n\nChoose:\t1- take a beer \t2- interrogate informant\n"); getch();
                                                                                                 scanf("%i", &l);

                                                                                                   switch(l)
                                                                                                   { case 1: printf("\t\n beer harms your senses"); getch();
                                                                                                                 CHP = CHP - 5;
                                                                                                                 Cmana = Cmana - 5;
                                                                                                                 Dmg = Dmg - 5;
                                                                                                             printf("\t\n Your Hp , Mp and ATK reduce in 5 points "); getch();
                                                                                                             printf("\t\n I have been banned for being drunk "); getch();
                                                                                                             printf("\t\n You fall sleep on the floor"); getch();
                                                                                                             printf("\t\n You  wake up in the next day"); getch();
                                                                                                             printf("\n Stranger: wake up ");getch();
                                                                                                             printf("\n Stranger: You were kicked out of the tavern for fighting"); getch();
                                                                                                             printf("\n Stranger: We didn't get the information"); getch();
                                                                                                             printf("\n\n\t You gets angry and decides to initiate the invasion");getch();
                                                                                                             printf("\n Stranger: what we will do now");getch();
                                                                                                             printf("\n\t\n\nChoose:\t1- invade the castle \t2- Call the army \n"); getch();
                                                                                                             scanf(" %i", &g);
                                                                                                             
                                                                                                                  switch(g){ case 1:  printf(" \n stranger: ok lets go ");getch();
                                                                                                                                      printf("\n  stranger :we will have to use the underground entries "); getch();
                                                                                                                                      printf("\n  stranger :I know one of them, but they are a full of strange creatures");getch();
                                                                                                                                      printf("\n  stranger: follow me");getch();
                                                                                                                                      printf("\n\tYou and stranger going to the entrance");getch();
                                                                                                                                      printf("\n\t You see a lever");getch();
                                                                                                                                      printf(" \t\n\nChoose:\t1- pull \t2- Continue \n"); getch();
                                                                                                                                      scanf("%i", &d);
                                                                                                                                            switch(d)
                                                                                                                                                { case 1: printf("\n\t you pull the lever and open an iron door");getch();
                                                                                                                                                          printf("\n\t inside was a troll");getch();
                                                                                                                                                          printf("\n\t the starts walking towards you");getch();
                                                                                                                                                          printf("\n\t he grab you and throw you against the wall");getch();
                                                                                                                                                          printf(" \n\t   holds his head and smashes it");getch();
                                                                                                                                                          printf("\t\t\n The end");getch();
                                                                                                                                                          printf("ztztznThanks for playing");getch();
                                                                                                                                                           break;

                                                                                                                                                  case 2: system("cls");
                                                                                                                                                         printf("\n\n\tYou continue to walk and come to the top of the castle"); getch();
                                                                                                                                                         printf("\n\n Captain Reinald: Hey stop right there!");getch();
                                                                                                                                                         printf("\n\n Stranger: Go to the king");getch();
                                                                                                                                                         printf("\n\n Stranger: I fight with the guards");getch();
                                                                                                                                                         printf("\n\nKing Alec:come here orc  ");getch();
                                                                                                                                                           for(i=0;i<22;i++){
                                                                                                                                                             printf("\n");
                                                                                                                                                                               }
                                                                                                                                                             printf("\t\t\t             ENEMY:\n");
																	                                                                 printf("\t\t\t           King Alec \n");
																	                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
																	                                                                 cENMhp = ENMhp;
																	                                                                	CHP = HP;
																	                           											ENMdmg = 5 + rand () % 10;
																	                                                                 do{
																	                                                                        system("cls");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\t\t\t       Choose what to do\n");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
																	                                                                 printf("-------------------------------------------------------------------------------\n");
																	                                                                 printf("\t\t\t\t    BATTLE\n");
																	                                                        	    
																	                                                                scanf("%i", &o);
																	                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                  system("cls");
													                                                                                   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");
													                                                                                   vlg=1;
																																	   Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
													                                                                               
																																   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
																																   printf("\t\t\t\tThanks for playing");getch();
																															       


                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     }
                                                                                                                                            break;
                                                                                                                            
                                                                                                            case 2: system("cls");
																											printf("\t\t\t Location: Cyrennica");getch();
																											printf("\n-------------------------------------------------------------------------------");
																											printf("\n\n\n\n %s: My warriors. It is time to take revenge on you for everything that these humans did us",nick);
																											printf("\n %s:Honor our people",nick);getch();
																											printf("\n %s:the invasion begins NOW",nick);getch();
																											printf("\n\n\t preparing the catapult");getch();
																										    printf("\n %s: FIRE",nick);getch();
																										    printf("\n\t the catapult shot destroys the mechanism of bridge");getch();
																											printf("\n\tthe bridge is lowered");getch();
																											printf("\n %s:GO",nick);getch();
																											printf("\n\tYou run towards the castle with bloodlust"); getch();
																											printf("\n\tPasses by enemy troops and goes straight to the king");getch();
																											system("cls");
																											        printf("\t\t\t             ENEMY:\n");
													                                                                 printf("\t\t\t           King Alec \n");
													                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
													                                                                 cENMhp = ENMhp;
													                                                                	CHP = HP;
													                           											ENMdmg = 5 + rand () % 10;
													                                                                 do{
													                                                                        system("cls");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t       Choose what to do\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t\t    BATTLE\n");
													                                                        	    
													                                                                scanf("%i", &o);
													                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                   system("cls");
																																	   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
													                                                                                    Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
																																	   
													                                                                               printf("\t\t\t\tThanks for playing");getch();
																															  
                                                                                                                        }
                                                                                                                     break;










                                                                                                    case 2:
																									        printf("\t\n\tYou walk toward the informant");getch();
                                                                                                            printf("\nInformant:finally you arrived"); getch();
                                                                                                            printf("\nInformant:I have the solution for your problems"); getch();
                                                                                                            printf("\n%s :what exactly?",nick);getch();
                                                                                                            printf("\ninformant: Hippogriffs");getch();
                                                                                                            printf("\nstranger: Perfect");getch();
                                                                                                            printf("\nstranger: with it we can send air forces to infiltrate and take down the drawbridge of the castle"); getch();
                                                                                                            printf("\n%s:I buy them",nick);getch();
                                                                                                            printf("\ninformant:Go to the location contained in this map. I'll be there waiting");getch();
                                                                                                            printf("\n\t\t You leave the tavern and go to the location");getch();
                                                                                                            printf("\n\talong the way you send a message by calling the army");getch();
                                                                                                            printf("\n\t Arriving on site you spot the army ");getch();
                                                                                                            printf("\n\t You and your army take the Hippogriff and go for the invasion");getch();
                                                                                                            system("cls");
																											printf("\t\t\t Location: Cyrennica");getch();
																											printf("\n-------------------------------------------------------------------------------");
																											printf("\n\n\n\n %s: My warriors. It is time to take revenge on you for everything that these humans did us",nick);
																											printf("\n %s:Honor our people",nick);getch();
																											printf("\n %s:the invasion begins NOW",nick);getch();
																											printf("\n\n\t Air troops attack the castle without giving chance for the opponents");getch();
																											printf("\n\tthe bridge is lowered");getch();
																											printf("\n\tYou run towards the castle with bloodlust"); getch();
																											printf("\n\tPasses by enemy troops and goes straight to the king");getch();
																											system("cls");
																											         printf("\t\t\t             ENEMY:\n");
													                                                                 printf("\t\t\t           King Alec \n");
													                                                                 printf("\t\t\t            HP = %i\n", ENMhp);getch();
													                                                                 cENMhp = ENMhp;
													                                                                	CHP = HP;
													                           											ENMdmg = 5 + rand () % 10;
													                                                                 do{
													                                                                        system("cls");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t       Choose what to do\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n");
													                                                                 printf("-------------------------------------------------------------------------------\n");
													                                                                 printf("\t\t\t\t    BATTLE\n");
													                                                        	    
													                                                                scanf("%i", &o);
													                                                                       switch(o)
													                                                                               {
													                                                                                       case 1:printf("################################################################################\n");
													                                                    												clvl = lvl;
													                                                    												printf("lvl = %i\n", clvl);
													                                                                                					printf("%s\n", nick);
													                                                                                					ENMdef = 10;
													                                                                               	 					Dmg = ATK + rand() % 12 - ENMdef;
													                                                                                					CHP = CHP - ENMdmg;
													                                                                                					Mcost = 10;
													                                                                                					Cmana = MP - Mcost + 5;
													                                                                                					printf("HP = %i\n", CHP);
													                                                                                					printf("Mana = %i\n", Cmana);
													                                                                                					for(i=0;i<4;i++){
													                                                                                    					printf("\n");
													                                                                                    									}
													                                                                                                  
													                                                                                                  
													                                                                                                  	if(Dmg >= 2*ATK){
													                                                                                									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
													                                                                                                					}
													                                                                                					else{
													                                                                                						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
													                                                                                    					}
													                                                                                					if(CHP < HP)	
													                                                                                								{
													                                                                                								printf(" The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
													                                                    															}
													                                                    												else
													                                                    													{
													                                                    													printf("You have dodged the king Attack");
													                                                    													
													                                                    													}
													
													                                                                                                   	printf("ENEMY:\n");
													                                                                                					printf("lvl = 5\n");
													                                                                               						// %d \n", rand() %6);
													                                                                                					printf("King Alec\n");
													                                                    												cENMhp = cENMhp - Dmg;
													                                                                                					printf("HP = %i\n", cENMhp);
													                                                                                					printf("MP = %i\n", Cmana);
													                                                                                					getch();
													                                                                                            		if(CHP<=0)
													                                                                								   { system("cls");
													                                                                                                     printf("\n\n You are dead"); getch();
													                                                                                                     printf("\n\nTHANKS FOR PLAYING");getch();
													                                                                                                     exit(0);
													                                                                                                             }
													                                                                                                   else continue;
													                                                                                                    break;
													                                                                                        case 2:     ENMdmg = 0;
																																						printf("################################################################################\n");
																																						Dmg = 0;
																																						clvl = lvl;
																																						printf("lvl = %i\n", clvl);
																										                            					printf("%s\n", nick);
																										                            					ENMdef = 0;
																										                            					Dmg = ATK + rand() % 12 - ENMdef;
																										                            					CHP = CHP- ENMdmg;
																										                            					Mcost = 10;
																										                            					Cmana = MP - Mcost + 5;
																										                            					printf("HP = %i\n", CHP);
																										                            					printf("Mana = %i\n", Cmana);
																										                                                
																										                            
																										                            					for(i=0;i<4;i++){
																										                            					printf("\n");
																										                            									}
																										                            
																										                            
																										                            					if(Dmg >= 2*ATK){
																										                            									printf("you have delt %i Damage to the king on a CRITICAL HIT\n\n\n\n", Dmg);
																										                                           		 				}
																										                            					else if(Dmg = 0){
																										                            									printf("You have successfully defended the king attack");
																										                            									}
																										                            					else{
																																	
																										                            						printf("you have delt %i Damage to the king on a Normal hit\n\n\n\n", Dmg);
																										                                					}
																										                           	 					if(CHP < HP)	
																										                            						{
																										                            						printf("The king delt %i to you on a Normal hit\n\n\n\n", ENMdmg);
																																							}
																																						else
																																							{
																																							printf("You have dodged the king's' Attack");
																																							}
																										                                
																																		            	printf("ENEMY:\n");
																										                            					printf("lvl = 5\n");
																										                           						// %d \n", rand() %6);
																										                            					printf("King Alec\n");
																																						cENMhp = cENMhp - Dmg;
																										                            					printf("HP = %i\n", cENMhp);
																										                            					printf("MP = %i\n", Cmana);
																										                                            
																										                                            getch();
																																					   if(CHP<=0)
																																					   { system("cls");
																													                                     printf("\n\n You are dead"); getch();
																													                                     printf("\n\nTHANKS FOR PLAYING");getch();
																													                                     exit(0);
																													                                             }
																													                                   else continue;
																													                                
																													                                	break;
																																			default:
																																					printf("That's not a valid option");                     
													
													
													
													                                                                              
													                                                                              }
													                                                                         }while(cENMhp>=0);
													                                                                                   system("cls");
																																	   printf("\t\t\t\tKing Alec has been defeated\n");getch();
													                                                                                   printf("\t\t\t\tyou honored the orc and destroyed the reign of Alec");getch();
													                                                                                    Sleep(500);
													                                                                                    printf("\t\t\t\t|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|");Sleep(100);
													
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													                                                                                   printf(":");Sleep(100);
													
													                                                                                    printf("|\n");Sleep(100);
																																	   
													                                                                               printf("\t\t\t\tThanks for playing");getch();
																															  break;

                                                                                                   }









                                                       }






                                               }


                                                      }
                                                      break;
                                                     
                                             
                                           































                 case 2:   for(i=0;i<22;i++){
                           printf("\n");
                                            }
                           ATK = ATK + 2;
                           DEF = DEF + 2;
                           printf("-------------------------------------------------------------------------------\n");
                           printf("Stranger: Hey you, wake up\n");getch();
                           printf("Stranger: We need to get outta here, NOW!\n");getch();
                           printf("Stranger: I'll help you get out of these Handcuffs\n");getch();
                           printf("Stranger: There we go\n");getch();
                           printf("Stranger: I'm hearing footsteps\n");getch();
                           printf("Stranger: Just follow me\n");getch();
                           printf("Stranger: This way!\n");getch();
                           printf("\tAfter turning on a corner you miss the trail of the stranger\n");getch();
                           printf("\tAnd face yourself within two ways\n");getch();
                           printf("\t*( Which way should I go? )*\n");getch();
                           printf("\n\t1-Left\n\t2-Right\n");
                           scanf("%i", &y);

                           switch(y)
                           {
                                    case 1:   printf("Cyrennica Guard: Hey stop right there!\n");getch();
                                              printf("Stranger: why did you come this way?\n");getch();
                                              printf("\t You get a sword from the wall and engage the guard into a fight\n");getch();
                                              for(i=0;i<22;i++){
                                                  printf("\n");
                                                              }
                                              printf("\t\t\t             ENEMY:\n");
                                              printf("\t\t\t       Cyrennica Guard\n");
                                              printf("\t\t\t            HP = %i\n", ENMhp);getch();
                                              printf("-------------------------------------------------------------------------------\n");
                                              printf("\t\t\t       Choose what to do\n");
                                              printf("-------------------------------------------------------------------------------\n");
                                              printf("\n\t1 - Attack\t\t\t\t\t2 - Defend\n\t3 - Heal\t\t\t\t\t4 - Run\n");
                                              printf("-------------------------------------------------------------------------------\n");
                                              printf("\t\t\t\t    BATTLE\n");
                                              scanf("%i", &z);

                                              switch(z)
                                              {
                                                       case 1:  for(i=0;i<22;i++){
                                                                printf("\n");
                                                                                 }
                                                                printf("\t\t\t       Choose what attack to do\n");
                                                                printf("-------------------------------------------------------------------------------\n");
                                                                printf("\n\t1 - RKO\t\t\t\t\t2 - Backstab\n\t3 - Bow Shot\t\t\t\t4 - Spear pierce\n");
                                                                printf("-------------------------------------------------------------------------------\n");
                                                                scanf("%i", &w);
                                                                switch(w)
                                                                {
                                                                          case 1:
                                                                                  printf("################################################################################\n");
                                                                                  printf("lvl = 1\n");
                                                                                  printf("%s\n", nick);
                                                                                  Dmg = ATK + rand() % 10 - ENMdef;
                                                                                  CHP = HP - ENMdmg;
                                                                                  Mcost = 10;
                                                                                  Cmana = MP - Mcost;
                                                                                  printf("HP = %i\n", CHP);
                                                                                  printf("Mana = %i\n", Cmana);
                                                                                  for(i=0;i<4;i++){
                                                                                  printf("\n");
                                                                                 }
                                                                                 printf("ENEMY:\n");
                                                                                 printf("lvl = %d \n", rand() % 6);
                                                                                  printf("Cyrennica Guard\n");
                                                                                  printf("HP = %i\n", ENMhp);
                                                                                  printf("MP = %i\n", Cmana);

                                                                          //case 2:
                                                                 break;
                                                                 default: printf("ERRO 404");
                                                                }


                                                    }

                                    break;


                 default: printf("Nao corresponde as opcoes, reinicie o Jogo");
        }




  getch();

  }}
