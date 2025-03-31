#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int spider(int shelter) {
    int x1, x2, rc, rc1, t, h;
    if(shelter == 0) {
        printf("In the middle of the night you feel a sharp pinch on your arm.");
        printf("Too tired to move you swipe at the pain and go back to sleep.");  
        printf("You wake up in the morning with an aching pain over your whole body unable to move and exhausted.");
        printf("You've been bitten by a spider and are now sick.");
        hunger(-25);
        thirst(-50);
            if (water>=1) {
                printf("You have %d waters.\n", water);
                printf("Would you like to replenish your thirst levels?(Yes=1 or N=2)");
                rc= scanf("%d", &x1);
                    if (rc != 1) {
                        clr();
                    }
                    while (x1 != 1 && x1 !=2) {
                        printf("Please enter a 1 or 2");
                        rc = scanf("%d", &x1);
                            if (rc != 1) {
                                clr();
                            }
                    }
                    if (x1==1) {
                        printf("How many would you like to drink?");
                        rc1= scanf("%d", &x2);
                            if (rc1 != 1) {
                                clr();
                            }
                             while (x2>water || x2 != 1 && x2 !=2) {
                                printf("Please enter a valid number no greater than your water supply.");
                                 rc = scanf("%d", &x2);
                                    if (rc1 != 1) {
                                        clr();
                                    }
                             }
                        t= x2*15;
                        thirst(t); 
                    }
            }
            if (banana_index>=1 || blackberries>=1) {
                printf("You have %d bananas and %d blackberries.\n", banana_index, blackberries);
                printf("Would you like to replenish your hunger levels?(Yes=1 or No=2)");
                rc= scanf("%d", &x1);
                    if (rc != 1) {
                        clr();
                    }
                    while (x1 != 1 && x1 !=2) {
                        printf("Please enter a 1 or 2");
                        rc = scanf("%d", &x1);
                            if (rc != 1) {
                                clr();
                            }
                    }
                    if (x1==1) {
                        printf("Would you like to eat blackberries(1) or bananas(2)?\n");
                        rc1= scanf("%d", &x2);
                            if (rc1 != 1) {
                                clr();
                            }
                            while (x2 != 1 && x2 !=2) {
                                printf("Please enter a 1 or 2.");
                                 rc1 = scanf("%d", &x2);
                                    if (rc1 != 1) {
                                        clr();
                                    }
                             }
                            if (x2==1) {
                                printf("The berries you thought were blackberries were actually poisonous.\n");
                                printf("You die.\n");
                                printf("GAME OVER");
                                /*END GAME*/
                                exit(0);
                            }
                            else if (x2==2) {
                                printf("How many would you like to eat?");
                                rc1= scanf("%d", &x1);
                                    if (rc1 != 1) {
                                        clr();
                                    }
                                while (x1>= bananas || rc != 1) {
                                    printf("Please enter a valid number no greater than your water supply.");
                                    rc1 = scanf("%d", &x1);
                                        if (rc1 != 1) {
                                            clr();
                                        }
                                }
                        banana_index= banana_index-x1;
                        h= x1*10;
                        hunger(h); 
                    }
                    }
            }    
        printf("You try to go back to sleep but after what feels like hours, your body starts to feel achy.\n");
        printf("What if that spider wasn't so harmless after all?\n");
        printf("You feel a fever start to overtake your body, muscles spasming uncontrolably.\n");
            if (medicine==1) {
                printf("You reach for the bottle of medicine you found washed up on the beach and drink the whole bottle.\n");
                printf("Only time will tell if it will help.");
                thirst(65);
                hunger(55);
            }
        printf("You wake up hours later. Your fever is gone and your body seems to have gotten over the spider bite.");
        tme(1080);
                    }
else {
    tme(900);
}
return 0;
}
