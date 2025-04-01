#include <stdio.h>
#include <unistd.h>
#include "index.h"
/* Global Variables*/
int wood_index=0; 
/*Function for collecting wood*/
int collectingwood() {
  int wood, t, coconut=0, difference, choice1, choice2, rc;

  printf("You venture along the beach in search of some drift wood.\n");
  tme(30);
  sleep(1);
  while(1) {
    printf("You start to find pieces strune across the beach. How many pieces would you like to collect?");
    rc = scanf("%d",&wood);
    if(rc == 1 && wood >= 0) {
      break;
    }
    else {
      printf("Please enter a number.\n");
      while( getchar() != '\n' );
    } 
  }
  t=3*wood+30;
    if (wood>10) {
      difference= wood-10;
      printf("You cannot carry that many pieces. You drop %d.\n", difference);
      wood=10;
    }
  printf("You head back.\n");
  wood_index= wood;
  tme(t);
  hunger(-7);
  thirst(-10);
  sleep(2);
  printf("Would you like to collect more wood? (1. Yes or 2. No)\n");
  rc = scanf("%d", &choice2);
        if (rc != 1 && choice2 >= 0) {
            clr();
        }
        while(choice2 !=1 && choice2 !=2) {
            printf("Please enter a 1 or 2");
            rc = scanf("%d", &choice2);
            if (rc != 1) {
                clr();
            }
        }
    if (choice2== 1) {
      rand_item();
      printf("You continue your mission to collect wood.\n");
      sleep(2);
      while(1) {
        printf("You start to find pieces strune across the beach. How many pieces would you like to collect?");
              rc = scanf("%d",&wood);
              if(rc == 1 && wood >= 0) {
                break;
              }
              else {
                printf("Please enter a number.\n");
                while( getchar() != '\n' );
              } 
            }
       t=3*wood+30;
        if (wood>10) {
          difference= wood-10;
          printf("You cannot carry that many pieces. You drop %d.\n", difference);
          wood=10;
        }
      tme(t);
      hunger(-7);
      hunger(-10);
      wood_index= wood_index+wood;
      sleep(3);
    }
  return 0;
}

