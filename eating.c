#include <stdio.h>
int ans;
int ans2;

int eating(){
    printf("Hunger: %d Thirst: %d\n", hunger, thirst);
    printf("Would you like to eat and drink? (1. Yes or 2. No) \n");
    rc = scanf("%d", &ans);
    if (rc != 1) {
        clr();
    }
    while (ans != 1 && ans !=2) {
        printf("Please enter a 1, or 2");
        rc = scanf("%d", &ans);
        if (rc != 1) {
            clr();
        }
    }
    if(ans == 1) {
        printf("what would you like to eat? (1.Bananas 2.Coconuts 3. Meat)");
        rc = scanf("%d", &ans2);
            if (rc != 1) {
                clr();
            }
        while (ans2 != 1 && ans2 !=2 && ans2 != 3) {
            printf("Please enter a 1, 2, or 3");
            rc = scanf("%d", &ans2);
                if (rc != 1) {
                    clr();
                }   
            }
        if(ans2 == 1) {
            hunger = hunger + 15;
            banana_index--;
        }
        else if (ans2 == 2) {
            hunger = hunger + 15;
            coconut_index--;
        }
        else if (ans2 == 3) {
            hunger = hunger + 25;
            meat_index--;
        }
    thirst = thirst + 10;
    water--;
    
    }
    else {
        printf("You move on.");
    }
    printf("Hunger: %d Thirst: %d", hunger, thirst);

return 0;
}
