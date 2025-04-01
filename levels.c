#include <stdio.h>
#include <stdlib.h>
#include "index.h"

/*Global Variables*/
int t_index=100;
int h_index=100;

/*Thirst levels function*/
int thirst(int thr) {
  t_index=t_index+thr;
    if (t_index>100) {
      t_index=100;
      printf("Thirst: %d\n", t_index);
    }
    else if (t_index<=0) {
      printf("You died due to thirst.\n");
      printf("Game over.\n");
      exit(0);
    }
    else {
      printf("Thirst: %d\n", t_index);
    }
  return 0;
}
/*Hunger levels function*/
int hunger(int hun) {
  h_index=h_index+hun;
    if (h_index>100) {
      h_index=100;
      printf("Hunger: %d\n", h_index);
    }
    else if (h_index<=0) {
      printf("You died due to hunger.\n");
      printf("GAME OVER");
      exit(0);
    }
    else {
      printf("Hunger: %d\n", h_index);
    }
  return 0;
}
