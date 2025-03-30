#include <stdio.h>
#include <unistd.h>
#include "index.h"
/* Global Variables*/
int wood_index=0; 
int shelter=0;
/*Function for collecting wood*/
int collectingwood() {
  int wood, t, coconut=0, difference;
  char choice1, choice2;
  printf("You venture along the beach in search of some drift wood.\n");
  tme(30);
  sleep(1);
  printf("You start to find pieces strune across the beach. How many pieces would you like to collect?");
  scanf("%d", &wood);
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
  printf("Would you like to collect more wood? (y or n)\n");
  scanf(" %c", &choice1);
    if (choice1=='y') {
      printf("On your way back you discover a coconut tree with a fallen coconut at its base.\n");
      sleep(1);
      printf("Will you collect it? (y or n)");
      scanf(" %c", &choice2);
        if (choice2=='y') {
          coconut=1;
        }
      printf("You continue your mission to collect wood.\n");
      sleep(2);
      printf("How many pieces of wood will you collect this time?"); 
      scanf("%d", &wood);
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

