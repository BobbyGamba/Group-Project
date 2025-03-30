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
      printf("GAME OVER\n");
      exit(EXIT_SUCCESS);
    }
    else {
      printf("Thirst Levels: %d\n", t_index);
    }
  return 0;
}

