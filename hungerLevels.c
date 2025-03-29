#include <stdio.h>
#include <stdlib.h>
#include "index.h"
/*Hunger levels function*/
int hunger(int hun) {
  int h_index=100;
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
