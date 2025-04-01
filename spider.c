#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int spider() {
    int x1, x2, rc, rc1, t, h;

    if (shelter == 0) {
        printf("In the middle of the night, you feel a sharp pinch on your arm.\n");
        printf("Too tired to move, you swipe at the pain and go back to sleep.\n");  
        printf("You wake up in the morning with an aching pain over your whole body, unable to move and exhausted.\n");
        printf("You've been bitten by a spider and are now sick.\n");

        hunger(-25);
        thirst(-50);

        if (medicine == 0 && banana_index == 0 && water_index == 0) {
            printf("You are lacking food, medicine, and/or water. You die.\n");
            printf("GAME OVER\n");
            exit(0);  
        }

        if (water >= 1) {
            printf("You have %d waters.\n", water);
            printf("Would you like to replenish your thirst levels? (Yes=1, No=2): ");
            rc = scanf("%d", &x1);

            while (rc != 1 || (x1 != 1 && x1 != 2)) {
                printf("Please enter 1 or 2: ");
                clr();
                rc = scanf("%d", &x1);
            }

            if (x1 == 1) {
                printf("How many would you like to drink? ");
                rc1 = scanf("%d", &x2);

                while (rc1 != 1 || x2 > water) {
                    printf("Please enter a valid number no greater than your water supply: ");
                    clr();
                    rc1 = scanf("%d", &x2);
                }

                t = x2 * 15;
                thirst(t); 
            }
        }

        if (banana_index >= 1 || blackberries >= 1) {
            printf("You have %d bananas and %d blackberries.\n", banana_index, blackberries);
            printf("Would you like to replenish your hunger levels? (Yes=1, No=2): ");
            rc = scanf("%d", &x1);

            while (rc != 1 || (x1 != 1 && x1 != 2)) {
                printf("Please enter 1 or 2: ");
                clr();
                rc = scanf("%d", &x1);
            }

            if (x1 == 1) {
                printf("Would you like to eat blackberries (1) or bananas (2)? ");
                rc1 = scanf("%d", &x2);

                while (rc1 != 1 || (x2 != 1 && x2 != 2)) {
                    printf("Please enter 1 or 2: ");
                    clr();
                    rc1 = scanf("%d", &x2);
                }

                if (x2 == 1) {
                    printf("The berries you thought were blackberries were actually poisonous.\n");
                    printf("You die.\n");
                    printf("GAME OVER\n");
                    exit(0);
                } 
                else if (x2 == 2) {
                    printf("How many bananas would you like to eat? ");
                    rc1 = scanf("%d", &x1);

                    while (rc1 != 1 || x1 > banana_index) {
                        printf("Please enter a valid number no greater than your banana supply: ");
                        clr();
                        rc1 = scanf("%d", &x1);
                    }

                    banana_index -= x1;
                    h = x1 * 10;
                    hunger(h);
                }
            }
        }    

        printf("You try to go back to sleep, but after what feels like hours, your body starts to feel achy.\n");
        printf("What if that spider wasn't so harmless after all?\n");
        printf("You feel a fever start to overtake your body, muscles spasming uncontrollably.\n");

        if (medicine == 1) {
            printf("You reach for the bottle of medicine you found washed up on the beach and drink the whole bottle.\n");
            printf("Only time will tell if it will help.\n");
            thirst(65);
            hunger(55);
        }

        printf("You wake up hours later. Your fever is gone, and your body seems to have gotten over the spider bite.\n");
        tme(1080); 
    } 
    else {
        tme(900); 
    }

    return 0;
}

