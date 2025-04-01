#include <stdio.h>
#include <unistd.h>
#include "index.h"
/*Global Variables*/
int banana_index=0, coconut_index=0, meat_index=0, water_index=0,shelter = 0;
void clr() {
    while ( getchar() != '\n' );
}

int main() {
int x, i, rc, bananas, coconuts, meat, difference, coconut_shell;
char y[30], choice1, choice2;
 
FILE * f=fopen("island.txt","r"); 
    for (i = 0; i <=10; i++) {
        fgets(y, 30, f);
        printf("%s", y);
    }
     
/*DAY 1 */
printf("You awaken to the sounds of waves crashing on the beach.\n");
printf("The water splashes on your face as the waves effortlessly throw you onto the shore.\n");
sleep(4);
printf("You stumble too your feet trying to grasp the situation you find youself in.\n");
printf("Before you stands a forest of palm trees towering over you and to your sides a white sand beach that curves to an end you can't see.\n");
sleep(4);
printf("Scanning your surroundings you try to wake up from this new terrible nightmare.\n");
printf("1: Yell for help\n2: Look for fellow survivors\n3: Cry\n");
rc = scanf("%d", &x);
if (rc != 1) {
    clr();
}
while (x != 1 && x !=2 && x != 3) {
    printf("Please enter a 1, 2, or 3");
    rc = scanf("%d", &x);
    if (rc != 1) {
        clr();
    }
}
if (x == 1) { 
    printf("You try yelling for help, screaming until you can't anymore but your cries fall upon the deaf ears of the trees\n");
    sleep(2);
}
else if (x == 2) {
    printf("Frantically, you run up and down the beach, not daring to dive into the thick growth of the jungle,\n");
    printf("trying to find someone, anyone, but to no avail. You return to the spot where you washed to shore\n");
      sleep(2);
}
else if (x == 3) {
    printf("Overcome by emotions of grief and despair you fall to your knees and begin to cry. With tears\n");
    printf("running down your face you hear the sound of your own wailing echoing through the trees and bouncing back to you.\n");
    printf("The twisting vines of the trees distorts the sound and it's almost as if the jungle is laughing at you\n");
    sleep(2);
}
printf("Accepting your new reality you sit back down on the beach when your adrenaline finally fades away, and hunger and thirst become your new focus\n");
printf("These are your hunger and thirst levels. You need to eat and drink to maintain them.\n");
sleep(2);
hunger(100);
thirst(100); 
printf("If they fall too low you will become weaker and unable to perform as many tasks and if either reach 0 you will die.\n");
printf("You look off into the horizon and try to guess what time of day it is. With the sun still beating down on you heavily you guess it is around\n");
printf("14:00.\n");
printf("You only have a few hours before sunset at 19:00.\n");
sleep(4);
while (hours<19) {
    if(hours>=16 && hours<=17) {
        eating();
    }
    else if (hours>=19 && hours<=20) {
        eating();
    }
    printf("1. Collect wood\n");
    printf("2. Build a shelter\n");
    printf("3. Find food\n");
    printf("4. Find water\n");
    rc = scanf("%d", &x);
    if (rc != 1) {
        clr();
    }
    while (x != 1 && x !=2 && x != 3 && x != 4) {
        printf("Please enter a 1, 2, 3, or 4");
        rc = scanf("%d", &x);
        if (rc != 1) {
            clr();
        }
    }
    if (x==1) {
        collectingwood();
    }
    else if (x==2) {
        if (wood_index<8) {
            printf("You do not have enough wood to build a shelter.\n"); 
            sleep(1);
        }
        else {
            printf("You muster all your strength and begin building a shelter.\n");
            printf("The sun is getting lower in the sky.\n");
            sleep(2);
            hunger(-15);
            thirst(-20);
            tme(60);
            wood_index= wood_index-8;
            printf("You have %d pieces of wood left.\n", wood_index);
            shelter+=1;
        }
    }
    else if (x==3) {
        printf("You venture away from the beach and towards the jungle.\n");
        printf("The tropical forest is so dense, scarce light gets in.\n");
        sleep(3);
        printf("As you go deeper and deeper you begin to lose hope. Everything is unfamiliar, green, and inedible.\n");
        printf("What if there is no food for you here?\n");
        tme(30);
        hunger(-5);
        thirst(-8);
        sleep(4);
        printf("You find a grove of wild blackberries.\n");
        printf("Would you like to collect some? (1. Yes or 2. No)");
        rc = scanf(" %d", &choice1);
        if (rc != 1) {
            clr();
          }
          while( choice1 != 1 && choice1 != 2) {
            printf("Please enter a 1 or 2");
            rc = scanf("%d", &choice1);
            if (rc != 1) {
                clr();
            }
          }  
        if (choice1==1) {
            printf("You decide to use your shirt as a satch.\n");
            sleep(1);
            while(1) {
              printf("How many would you like to collect? ");
              rc = scanf("%d",&blackberries);
              if(rc == 1 && blackberries >= 0) {
                break;
              }
              else {
                printf("Please enter a number.\n");
                while( getchar() != '\n' );
              } 
            }
            while(blackberries > 15) {
                    difference = blackberries-15;
                    printf("You can't carry that many blackberries, you drop %d.\n", difference);
                    blackberries=15;
            }
            tme(5);
        }
        printf("Would you like to keep searching for more food? (1. Yes or 2. No)\n");
        rc = scanf(" %d", &choice2);
        if (rc != 1) {
            clr();
        }
        while(choice2 !=1 && choice2 !=2) {
            printf("Please enter a 1 or 2");
            rc = scanf("%d", &choice2);
            if (rc != 1) {
                clr();
            }
        }
        if (choice2==1) {
            printf("You keep venturing deeper into the jungle.\n");
            printf("In the distance you see a tree with what looks to be yellow fruit on it.\n");
            sleep(3);
            printf("As you get closer you find the tree heavy with clusters of bananas.\n");
            tme(20);
            while(1) {
              printf("How many would you like to collect?");
              rc = scanf("%d", &bananas);
              if(rc == 1 && bananas >= 0) {
                break;
              }
              else {
                printf("Please enter a number.\n");
                while( getchar() != '\n' );
              }
            }
            while(bananas > 5) {
                    difference= bananas-5;
                    printf("You can't carry that many bananas, you drop %d.\n", difference);
                    bananas=5;
                }
            tme(30);
            banana_index= banana_index+bananas;
        }
        printf("You head back to the beach with your bounty.\n");
        hunger(-8);
        thirst(-13);
        sleep(2);
        if (shelter==1) {
            printf("You can't find your camp. (1. Left or 2. Right)\n");
            rc=scanf("%d", &x);
            if(rc != 1) {
              clr();
            }
            while(x != 1 && x != 2) {
              printf("Please enter a 1 or 2\n");
              rc=scanf("%d", &x);
              if(rc != 1) {
                clr();
              }
            }
            if (x==1) {
                printf("You walk along the shore for 20 minutes and can't find your camp so you turn back.\n");
                tme(40);
                hunger(-6);
                thirst(-3);
            }
            else {
                printf("After 10 minutes of walking along the shore you find your shelter.\n");
                hunger(-2);
                thirst(-1);
                tme(10);
            }
        }
    }
    else if (x==4) {
        printf("You cannot drink seawater so you make your way into the jungle to find freshwater.\n");
        sleep(2);
        printf("Will you go left or right? (1. Left or 2. Right)");
        rc = scanf("%d", &choice1);
            if(rc != 1) {
                clr();
            }
            while(choice1 != 1 && choice1 != 2) {
                printf("Please enter a 1 or 2");
                rc = scanf("%d", &choice1);
                    if(rc != 1) {
                        clr();
                    }
            }
            if (choice1==1) {
                printf("As you make your way through the foliage you find a coconut tree.\n");
                sleep(3);
                printf("At the base you find an old coconut split in half. You can use this to collect a small amount of water.\n");
                coconut_shell=1;
                sleep(3);
                printf("You follow the sounds of water until you find a stream and begin drinking as much water as you can.\n");
                sleep(3);
                thirst(100);
                sleep(3);
                printf("You fill up your coconut with water and head back to the beach.\n");
                tme(60);
                water_index= water_index+1;
                if (container==1) {
                    printf("You collect 2 waters with your container.\n");
                    water_index= water_index+2;
                }
            }
            else if (choice1==2){
                printf("You find a small river and drink water until you're full.\n");
                 if (container==1) {
                    printf("You collect 2 waters with your container.\n");
                    water_index= water_index+2;
                }
                sleep(2);
                thirst(100);
                printf("You head back to the beach.\n");
                tme(20);
            }
        }
    }
    printf("The sun has set and exhaustion settles down upom you.\n");
    if (shelter==1){
        printf("You cuddle up under your makeshift shelter and let sleep overtake you.\n");
    }
    else {
        printf("With no shelter, you decide to lay down under a tree to sleep until morning comes.\n");
    }
    spider();
    printf("Even after waking up you still can't believe what's happened.\n");
    sleep(3);
    printf("You had hoped - prayed - that morning would free you from this nightmare. But as the sun rises, reality\n");
    sleep(3);
    printf("only sinks deeper. You're still here. Trapped. Forced to survive.\n");
    sleep(3);
    printf("As you push yourself up, scanning yout surroundings, something catches your eye - a disturbance in the\n");
    sleep(3);
    printf("sand that wasn't there last night\n");
    sleep(3);
    printf("Approaching causiously, your mind struggles to process what your seeing. But the realization quickly\n");
    sleep(3);
    printf("curdles into terror as deep, clawed footprints come into full view\n");
    sleep(3);
    printf("Your heart pounds. Your breath turns shallow and ragged. Sweat beads down your forehead.\n");
    sleep(3);
    printf("You're not alone on this island.");
    sleep(3);
    printf("And whatever is here with you... is massive\n");
    sleep(3);
    printf("Coming back to reality and the situation at hand, you plan your next move to survive.\n");
        
/* DAY 2 */

while (hours < 19) {
    if (hours >= 14 && hours <= 15) {
        eating();
    } else if (hours >= 17 && hours <= 18) {
        eating();
    }

    printf("1. Collect wood.\n");
    printf("2. Build shelter.\n");
    printf("3. Find food.\n");
    printf("4. Find water.\n");

    rc = scanf("%d", &choice1);
    if (rc != 1) {
        clr();
    }

    while (choice1 < 1 || choice1 > 4) {
        printf("Please enter a 1, 2, 3, or 4.\n");
        rc = scanf("%d", &choice1);
        if (rc != 1) {
            clr();
        }
    }

    if (choice1 == 1) {
        collectingwood();
    } else if (choice1 == 2) {
        if (shelter == 1) {
            printf("You've already made a shelter.\n");
        } else {
            if (wood_index < 8) {
                printf("You do not have enough wood to build a shelter.\n");
                sleep(1);
            } else {
                printf("You muster all your strength and begin building a shelter.\n");
                sleep(2);
                hunger(-15);
                thirst(-20);
                tme(60);
                wood_index -= 8;
                printf("You have %d pieces of wood left.\n", wood_index);
                shelter += 1;
            }
        }
    } else if (choice1 == 3) {
        printf("What would you like to find?\n");
        printf("1. Coconuts\n");
        printf("2. Bananas\n");
        printf("3. Meat\n");

        rc = scanf("%d", &choice2);
        if (rc != 1) {
            clr();
        }

        while (choice2 < 1 || choice2 > 3) {
            printf("Please enter a 1, 2, or 3.\n");
            rc = scanf("%d", &choice2);
            if (rc != 1) {
                clr();
            }
        }

        if (choice2 == 1) {
            printf("You find a coconut tree and climb.\n");

            while (1) {
                printf("How many coconuts do you want to take?\n");
                rc = scanf("%d", &coconuts);
                if (rc == 1 && coconuts >= 0) {
                    break;
                } else {
                    printf("Please enter a number.\n");
                    while (getchar() != '\n');
                }
            }

            while (coconuts > 3) {
                printf("You can't carry that many coconuts. Enter a lower number.\n");
                scanf("%d", &coconuts);
            }

            coconut_index += coconuts;
            printf("You have %d coconuts.\n", coconut_index);
            hunger(-15);
            thirst(-15);
            tme(30);

        } else if (choice2 == 2) {
            printf("You return to the banana tree to get more bananas.\n");

            while (1) {
                printf("How many bananas do you want to take?\n");
                rc = scanf("%d", &bananas);
                if (rc == 1 && bananas >= 0) {
                    break;
                } else {
                    printf("Please enter a number.\n");
                    while (getchar() != '\n');
                }
            }

            if (bananas > 5) {
                difference = bananas - 5;
                printf("You can't carry that many bananas, you drop %d.\n", difference);
                bananas = 5;
            }

            banana_index += bananas;
            hunger(-15);
            thirst(-15);
            tme(30);

        } else if (choice2 == 3) {  
            if (knife == 1) {
                printf("With your knife, you venture into the jungle to hunt for food.\n");
                printf("You find a small pig and using your knife, you kill it and harvest its meat.\n");
                meat_index += 5;
                hunger(-20);
                thirst(-20);
                tme(60);
            } else {
                printf("You venture into the jungle to hunt for food.\n");
                printf("You find a small pig but are unable to capture it, and it flees.\n");
                printf("You try to give chase, but the pig is too fast and escapes further into the jungle.\n");
                hunger(-25);
                thirst(-25);
                tme(90);
            }
        }

    } else if (choice1 == 4) {  
        if (container == 1) {
            printf("You return to the river to collect water.\n");
            thirst(50);
            printf("Using your container, you collect water and return to camp.\n");
            water_index += 2;
            if (coconut_shell == 1) {
                printf("You also use your coconut shell to fill up water.\n");
                water_index += 1;
            }
            hunger(-10);
            tme(30);
        }
        else if (coconut_shell == 1) {
            printf("You return to the river to collect water.\n");
            thirst(50);
            printf("Using your coconut shell, you collect water and return to camp.\n");
            water_index += 2;
            hunger(-10);
            tme(30);

        } else {
            printf("You return to the river to get water.\n");
            thirst(50);
            printf("You drink until you're full and return to camp.\n");
            tme(15);
        }
    }
}

printf("The sun has set, and exhaustion settles upon you.\n");

if (shelter == 1) {
    printf("You cuddle up under your makeshift shelter and let sleep overtake you.\n");
} else {
    printf("With no shelter, you decide to lay down under a tree to sleep until morning comes.\n");
}
   monster();
    /*DAY 3*/
    printf("You wake later to the sounds of raindrops hitting your makeshift shelter.\n");
    printf("You hear the wind howling outside and try to retreat further in the shelter, away from the water at the entrance.\n");
    sleep(3);
    printf("The night goes on and the rain gets heavier and heavier.\n");
    tme(900);
    printf("You see dim light from the dawn sun filter through your shelter.\n");
    sleep(3);
    printf("The rain has stopped. YOu walk out of your shelter to see the damage.\n");
    printf("Broken branches are strewn across the beach and fallen trees.\n");
    sleep(3);
    printf("All the sudden you hear a snap behind you. You whip around just in time to see your shelter collapse.\n");
    shelter--;
    printf("You fall to your knees in anguish. All the time you spent building your shelter is wasted.\n");
    printf("You sit there in shock, unable to believe what has just happened.");
    tme(15);
    sleep(3);
    printf("You walk over to your wood supply and find it drenched, useless for a shelter or a fire.\n");
    printf("You discard it all.\n");
    wood_index=0;
    while (hours<19) {
            if(hours>=14 && hours<=15) {
        eating();
    }
    else if(hours>=17 && hours<=18) {
        eating();
    }
        printf("1. Collect wood.\n");
        printf("2. Build shelter.\n");
        printf("3. Find food.\n");
        printf("4. Find water.\n");
        rc = scanf("%d", &choice1);
        if (rc != 1) {
            clr();
        }
        while(choice1 != 1 && choice1 != 2 && choice1 != 3 && choice1 != 4) {
            printf("Please enter a 1, 2, 3, or 4.\n");
            rc = scanf("%d", &choice1);
            if(rc != 1) {
                clr();
            }
        }
        if(choice1 == 1) {
            collectingwood();
        }
        else if(choice1 == 2) {
            if(shelter == 1) {
                printf("You've already made a shelter\n");
            }
            else {
                  if (wood_index<8) {
                      printf("You do not have enough wood to build a shelter.\n"); 
                      sleep(1);
                  }
                  else {
                      printf("You muster all your strength and begin building a shelter.\n");
                      printf("The sun is getting lower in the sky.\n");
                      sleep(2);
                      tme(60);
                      wood_index= wood_index-8;
                      printf("You have %d pieces of wood left.\n", wood_index);
                      shelter+=1;
                  }
            }
        }
        else if (choice1 == 3) {
            printf("What would you go like to find?\n");
            printf("1. Coconuts\n");
            printf("2. Bananas\n");
            printf("3. Meat\n");
            rc = scanf("%d", &choice2);
            if(rc != 1) {
                clr();
            }
            while(choice2 != 1 && choice2 != 2 && choice2 != 3) { 
                printf("Please enter a 1, 2, or 3\n");
                rc = scanf("%d", &choice2);
                if(rc != 1) {
                    clr();
                }
            }
            if(choice2 == 1) {
                printf("You return to the coconut tree to get more coconuts.\n");
                while(1) {
                  printf("How many coconuts do you want to take?\n ");
                  rc = scanf("%d", &coconuts);
                  if(rc == 1 && coconuts >= 0) {
                    break;
                  }
                  else {
                    printf("Please enter a number.\n");
                    while( getchar() != '\n' );
                  }
                }
                while(coconuts > 3) {
                    printf("You can't carry that many coconuts. Enter a lower number\n");
                    scanf("%d", &coconuts);
                }
                coconut_index= coconut_index+coconuts;
                printf("You have %d coconuts.\n", coconut_index);
                hunger(-15);
                thirst(-15);
                tme(30);
                
            }
            if(choice2 == 2) {
                printf("You return to the banana tree to get more bananas.\n");
                while(1) {
                  printf("How many bananas do you want to take?\n");
                  rc = scanf("%d", &bananas);
                  if(rc == 1 && bananas >= 0) {
                    break;
                  }
                  else {
                    printf("Please enter a number.\n");
                    while( getchar() != '\n' );
                  }
                }
                while(bananas > 5) {
                    difference= bananas-5;
                    printf("You can't carry that many bananas, you drop %d.\n", difference);
                    bananas=5;
                }
                banana_index= banana_index+bananas;
                hunger(-15);
                thirst(-15);
                tme(30);
            }
            if(choice2 == 3) {
                if(knife == 1) {
                    printf("With your knife you venture into the jungle to hunt for food.\n");
                    printf("You find a small pig and using your knife you kill it and harvest its meat.\n");
                    meat_index+=5;
                    hunger(-20);
                    thirst(-20);
                    tme(60);
                }
                else {
                    printf("You venture into the jungle to hunt for food.\n");
                    printf("You find a small pig but are unable to capture it and it flees.\n");
                    printf("You try to give chase but the pig is too fast and it escapes further into the jungle.\n");
                    hunger(-25);
                    thirst(-25);
                    tme(90);
                }
            }
        }        
        else if(choice1 == 4) {
             if (container == 1) {
            printf("You return to the river to collect water.\n");
            thirst(50);
            printf("Using your container, you collect water and return to camp.\n");
            water_index += 2;
            if (coconut_shell == 1) {
                printf("You also use your coconut shell to fill up water.\n");
                water_index += 1;
            }
            hunger(-10);
            tme(30);
        }
        else if (coconut_shell == 1) {
            printf("You return to the river to collect water.\n");
            thirst(50);
            printf("Using your coconut shell, you collect water and return to camp.\n");
            water_index += 2;
            hunger(-10);
            tme(30);
        }
        else {
            printf("You return to the river to get water.\n");
            thirst(50);
            printf("You drink until you're full and return to camp.\n");
            tme(15);
        }
    }
    }
    printf("The sun has set and exhaustion settles down upom you.\n");
    if (shelter ==1 ) {
        printf("You cuddle up under your makeshift shelter and let sleep overtake you.\n");
    }
    else {
        printf("With no shelter, you decide to lay down under a tree to sleep until morning comes.\n");
    }
    monster();
    /*DAY 4*/
    printf("Waking up on the fourth day, you've begun to settle in to your new life.\n");
    printf("You set out for the day determined to conquer this island.\n");
    printf("As you leave your shelter you notice something on the horizon, a glint on the sea.\n");
    printf("Hope fills your soul as you realize a ship is passing the island.\n");
    printf("A chance for rescue has finally arrived!!!\n");
    printf("In a hurried frenzy, you gather all the wood you have and try to make a signal fire to bring in the ship.\n");
    if(wood_index >= 10) {
        printf("As you pile more and more wood on the fire the flames grow bigger and bigger until it becomes a raging inferno.\n");
        printf("Peering into the distance your heart jumps for joy as the ship slowy turns towards the island.\n");
        printf("Tears of joy run down your face as a small boat departs from the ship and sailors row their boat towards you to return you to civilization and home.\n");
        printf("Congratulations!!! You've survived the island and have been rescued.\n");
        printf("Thanks for playing!!!");
    }
    else {     
        printf("As you pile all the wood you have onto the fire you hold out hope for rescue.\n");
        printf("But as the seconds turn to minutes, your hope fades away as the ship continues on its course and your fire burns out.\n");
        printf("Despair fills your body and turns to terror as you hear a rustling in the bushes behind you.\n");
        printf("You slowly turn around to face the horror that waits you.\n");
        printf("Gnashing teeth and razor sharp teeth leap for you as the beast and its gaping jaws swallow you into darkness.\n");
        printf("GAME OVER");
    }
return 0;
}

  
