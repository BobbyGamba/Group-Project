#include <stdio.h>
#include "index.h"

int eating() {
    int ans, ans2, rc, h, t;  

    printf("Would you like to eat and/or drink? (1. Yes or 2. No) \n");
    rc = scanf("%d", &ans);
    if (rc != 1) {
        clr();
    }

    while (ans != 1 && ans != 2) {
        printf("Please enter a 1 or 2: ");
        rc = scanf("%d", &ans);
        if (rc != 1) {
            clr();
        }
    }

    while (ans == 1) {
        printf("What would you like? (1. Bananas 2. Coconuts 3. Meat 4. Water): ");
        rc = scanf("%d", &ans2);
        if (rc != 1) {
            clr();
        }

        while (ans2 < 1 || ans2 > 4) {
            printf("Please enter a valid choice (1, 2, 3, or 4): ");
            rc = scanf("%d", &ans2);
            if (rc != 1) {
                clr();
            }
        }
        if (ans2 == 1) {  
          if (banana_index==0) {
            printf("You have no bananas");
          }
          else {
          printf("How many would you like to eat? ");
            rc = scanf("%d", &ans);
            if (rc != 1) {
                clr();
            }

            while (ans > banana_index || rc != 1) {
                printf("Please enter a valid number no greater than your banana supply: ");
                rc = scanf("%d", &ans);
                if (rc != 1) {
                    clr();
                }
            }

            banana_index -= ans;
            h = ans * 20;
            hunger(h);
        } 
        }
        else if (ans2 == 2) {  
        if (coconut_index==0) {
            printf("You have no coconuts");
          }
           else{
            printf("How many would you like to drink? ");
            rc = scanf("%d", &ans);
            if (rc != 1) {
                clr();
            }

            while (ans > coconut_index || rc != 1) {
                printf("Please enter a valid number no greater than your coconut supply: ");
                rc = scanf("%d", &ans);
                if (rc != 1) {
                    clr();
                }
            }

            coconut_index -= ans;
            t = ans * 15;
            thirst(t);
        } 
        }
        else if (ans2 == 3) {  
        if (meat_index==0) {
            printf("You have no meat");
          }
            else {printf("How many would you like to eat? ");
            rc = scanf("%d", &ans);
            if (rc != 1) {
                clr();
            }

            while (ans > meat_index || rc != 1) {
                printf("Please enter a valid number no greater than your meat supply: ");
                rc = scanf("%d", &ans);
                if (rc != 1) {
                    clr();
                }
            }

            meat_index -= ans;
            h = ans * 30;
            hunger(h);
        } 
        }
        else if (ans2 == 4) { 
        if (water_index==0) {
            printf("You have no water");
          } 
            else {
            printf("How many would you like to drink? ");
            rc = scanf("%d", &ans);
            if (rc != 1) {
                clr();
            }

            while (ans > water_index || rc != 1) {
                printf("Please enter a valid number no greater than your water supply: ");
                rc = scanf("%d", &ans);
                if (rc != 1) {
                    clr();
                }
            }

            water_index -= ans;
            t = ans * 20;
            thirst(t);
        }
        }
        printf("Would you like to eat and/or drink again? (1. Yes or 2. No): ");
        rc = scanf("%d", &ans);
        if (rc != 1) {
            clr();
        }

        while (ans != 1 && ans != 2) {
            printf("Please enter a 1 or 2: ");
            rc = scanf("%d", &ans);
            if (rc != 1) {
                clr();
            }
        }
    }

    printf("You move on.\n");
    return 0;  
}

