#include <stdio.h>
/*Thirst levels function*/
int thirst(int thr) {
  int t_index=100;
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

