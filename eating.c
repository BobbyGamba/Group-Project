#include <stdio.h>

int eating(){
  int ans, ans2, rc;

  hunger();
  thirst();
    printf("Would you like to eat and/or drink? (1. Yes or 2. No) \n");
    rc = scanf("%d", &ans);
    if (rc != 1) {
        clr();
    }
    while (ans != 1 && ans !=2) {
        printf("Please enter a 1 or 2");
        rc = scanf("%d", &ans);
        if (rc != 1) {
            clr();
        }
    }
    if(ans == 1) {
        printf("What would you like? (1.Bananas 2.Coconuts 3. Meat 4.Water)");
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
          printf("How many would you like to eat?");
          rc= scanf("%d", &ans);
            if (rc != 1) {
              clr();
            }
            while (ans> banana_index || rc != 1) {
              printf("Please enter a valid number no greater than your banana supply.");
              rc = scanf("%d", &ans);
                if (rc != 1) {
                  clr();
                }
            }
          banana_index= banana_index-ans;
          h= ans*10;
          hunger(h); 
        }
        else if (ans2 == 2) {
        printf("How many would you like to drink?");
          rc= scanf("%d", &ans);
            if (rc != 1) {
              clr();
            }
            while (ans> coconut_index || rc != 1) {
              printf("Please enter a valid number no greater than your coconut supply.");
              rc = scanf("%d", &ans);
                if (rc != 1) {
                  clr();
                }
            }
          coconut_index= coconut_index-ans;
          t= ans*10;
          thirst(t); 
        }
        else if (ans2 == 3) {
         printf("How many would you like to eat?");
          rc= scanf("%d", &ans);
            if (rc != 1) {
              clr();
            }
            while (ans> meat_index || rc != 1) {
              printf("Please enter a valid number no greater than your meat supply.");
              rc = scanf("%d", &ans);
                if (rc != 1) {
                  clr();
                }
            }
          meat_index= meat_index-ans;
          h= ans*25;
          hunger(h); 
        }
        else if (ans2==4) {
          printf("How many would you like to drink?");
          rc= scanf("%d", &ans);
            if (rc != 1) {
              clr();
            }
            while (ans> water_index || rc != 1) {
              printf("Please enter a valid number no greater than your water supply.");
              rc = scanf("%d", &ans);
                if (rc != 1) {
                  clr();
                }
            }
          water_index= water_index-ans;
          t= ans*15;
          thirst(t); 
        }
        
    else {
        printf("You move on.");
    }

return 0;
}
