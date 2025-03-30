#include <stdio.h>
#include <stdlib.h>
#include "index.h"

/*Thirst levels function*/
int thirst(int thr) {
  int t_index=90;
  t_index=t_index+thr;
    if (t_index>100) {
      t_index=100;
      printf("Thirst Levels: %d\n", t_index);
    }
    else if (t_index<=0) {
      printf("You died due to thirst.\n");
      printf("Game over.\n");
    }
    else {
      printf("Thirst Levels: %d\n", t_index);
    }
  return 0;
}
/*Hunger levels function*/
int hunger(int hun) {
  int h_index=85;
  h_index=h_index+hun;
    if (h_index>100) {
      h_index=100;
      printf("Health=%d\n", h_index);
    }
    else if (h_index<=0) {
      printf("You died due to hunger.\n");
      printf("GAME OVER");
      exit(EXIT_SUCCESS);
    }
    else {
      printf("Health=%d\n", h_index);
    }
  return 0;
}
