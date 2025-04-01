#include <stdio.h>
#include <stdlib.h>
#include "index.h"

int monster() {
  if(shelter == 1) {
    printf("In the middle of the night you're awoken by the sound of footsteps outside your shelter.\n");
    printf("The sounds approach you in the darkness but retreat into the night, you're safe for now...\n");
  }
  else if(shelter == 0) {
    printf("In the middle of the night you're awoken by the sound of footsteps approaching you in the darkness.\n"); 
    printf("As your eyes try to adjust to peer into the night the bushes in front of you start to rustle.\n");
    printf("Before you can begin to think about what's happening a ghastly monster leaps towards you.\n");
    printf("The last thing you see is the gleem of the moonlight on the beasts teeth before you are devoured.\n");
    printf("GAME OVER");
    exit(0);
  }
  return 0;
}
