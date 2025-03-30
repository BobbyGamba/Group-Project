#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_item() {
  int r;
  srand(time(NULL));
  r = rand()%4+1;
 
  printf("While walking across the beach you see something wash ashore in the surf.\n");
  if(r == 1) {
    printf("As you get closer you realize that a knife has washed ashore from the wreckage. You bend over and pick it up.\n");
    printf("You have acquired a knife.\n");
  }
  else if(r == 2) {
    printf("As you get closer you realize that a container has washed ashore from the wreckage. You bend over and pick it up.\n");
    printf("You have acquired a container.\n");
  }
  else if(r == 3) {
    printf("As you get closer you realize that a box of medicine has washed ashore from the wreckage. You bend over and pick it up.\n");
    printf("You have acquired a box of medicine.\n");
  }
  else if(r == 4) {
    printf("As you get closer you realize that it's only a part of the fragmented remains of the wreckage.\n");
  }

return 0;
}  
