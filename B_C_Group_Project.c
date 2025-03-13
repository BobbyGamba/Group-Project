#include <stdio.h>

/*Global Variables*/
int hours=14; 
int wood_index=0; 

/*Time function*/
int tme(int min) {
int index=0;
  index= index+min;
  if (index<10) {
    printf("%d:0%d\n", hours, index);
  }
  else if (index<60) {
    printf("%d:%d\n", hours, index);
  }
  else if (index==60) {
    hours=hours+1;
    index=0;
    printf("%d:00\n", hours);
  }
  else {
    while (index>60) {
      index=index-60;
      hours= hours+1;
    }
    if (index<10) {
      printf("%d:0%d\n", hours, index);
    }
    else {
      printf("%d:%d\n", hours, index);
    }
  }
  return 0;
}
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
    }
    else {
      printf("Health=%d\n", h_index);
    }
  return 0;
}
/*Thirst levels function*/
int thirst(int thr) {
  int t_index=100;
  t_index=t_index+thr;
    if (t_index>100) {
      t_index=100;
      printf("Thirst=%d\n", t_index);
    }
    else if (t_index<=0) {
      printf("You died due to thirst.\n");
      printf("Game over.\n");
    }
    else {
      printf("Thirst=%d\n", t_index);
    }
  return 0;
}

/*Function for collecting wood*/
int collectingwood() {
  int wood, t, coconut=0;
  char choice1, choice2;
  printf("You venture along the beach in search of some drift wood.\n");
  tme(30);
  printf("You start to find pieces strune across the beach. How many pieces would you like to collect?");
  scanf("%d", &wood);
    if (wood>10) {
      printf("You cannot carry that many pieces. On your way back you drop 2.\n");
      wood=wood-2;
    }
    wood_index= wood;
    t=3*wood+30;
    tme(t);
    printf("Would you like to collect more wood? (y or n)\n");
    scanf(" %c", &choice1);
      if (choice1=='y') {
        printf("On your way back you discover a coconut tree with a fallen coconut at its base.\n");
          printf("Will you collect it? (y or n)");
          scanf(" %c", &choice2);
            if (choice2=='y') {
              coconut=1;
            }
        printf("You continue your mission to collect wood.\n");
        printf("How many pieces of wood will you collect this time?"); 
        scanf("%d", &wood);
          if (wood>20) {
            printf("You cannot carry that many pieces. On your way back you drop 2.\n");
            wood=wood-2;
        }
        wood_index= wood_index+wood;
      }
    return 0;
}
/*Function for monster*/
int monster(int shelter) {
    if(shelter == 1) {
        printf("As you drift to sleep you hear a rustling sound.");
        printf("The sound gets louder as you hear footsteps approaching you.");
        printf("The footsteps stop outside your shelter, then grow louder and fade away as the monster walks away.");
        printf("Your safe inside tonight.");
    }
    else {
        printf("As you drift to sleep you're awoken by a rustling sound.");
        printf("With drowsy eyes you peer into the darkness to see the bushes shaking.");
        printf("Before you can think the monster jumps out of the brush and the last thing you see is the glint of the moon\noff its razor sharp claws.");
        printf("GAME OVER");
    }
}

void clr() {
    while ( getchar() != '\n' );
}

int main() {
int x, i, rc; shelter = 0;
char y[30];
 
FILE * f=fopen("island.txt","r"); 
    for (i = 0; i <=10; i++) {
        fgets(y, 30, f);
        printf("%s\n", y);
    }
printf("You awaken to the sounds of waves crashing on the beach\n");
printf("The water splashes on your face as the waves effortlessly throw you onto the shore\n");
printf("You stumble too your feet trying to grasp the situation you find youself in\n");
printf("Before you stands a forest of palm trees towering over you and to your sides a white sand beach that curves to an end you can't see\n");
printf("Scanning your surroundings you try to wake up from this new terrible nightmare\n");
printf("1: Yell for help\n2: Look for fellow survivors\n3: Cry\n");
rc = scanf("%d", &x);
if (rc != 1) {
    clr();
}
while (x != 1 && x !=2 && x != 3) {
    printf("Please enter a 1, 2, or 3");
    rc = scanf("%d", &x);
    if (rc != 1) {
        clr();
    }
    if (x == 1) { 
        printf("You try yelling for help, screaming until you can't anymore but your cries fall upon the deaf ears of the trees\n");
    }
    else if (x == 2) {
        printf("Frantically, you run up and down the beach, not daring to dive into the thick growth of the jungle,\ntrying to find someone, anyone but to no avail. You return to the spot where you ashed to shore\n");
    }
    else if (x == 3) {
        printf("Overcome by emotions of grief and despair you fall to your knees and begin to cry. With tears\nrunning down your face you hear the sound of your own wailing echoing through the trees and bouncing back to you.\nThe twisting vines of the trees distorts the sound and it's almost as if the jungle is laughing at you\n");
    }
}
printf("Accepting your new reality you sit back down on the beach when your adrenaline fianlly fades away, and hungry and thirst become your new focus\n");
printf("These are your hunger and thirst levels. They will start at 100 points and you need to eat and drink to maintain them. If they fall too low\nyou will become weaker and unable to perform as many tasks and if either reach 0 you will die.\n");

printf("You look off into the horizon and try to guess what time of day it is. With the sun still beating down on you heavily you guess it is around 14:00.\n");
printf("You only have a few hours before sunset at 19:00.\n");
printf("1. Collect wood\n");
printf("2. Build a shelter\n");
printf("3. Find food\n");
printf("4. Find water\n");
scanf("%d", &x);
  if (x==1) {
    collectingwood();
    printf("1. Collect wood\n");
    printf("2. Build a shelter\n");
    printf("3. Find food\n");
    printf("4. Find water\n");
    scanf("%d", &x);
  }
  else if (x==2) {
    if (wood_index<8) {
      printf("You do not have enough wood to build a shelter.\n");
      printf("1. Collect wood\n");
      printf("2. Build a shelter\n");
      printf("3. Find food\n");
      printf("4. Find water\n");
      scanf("%d", &x); 
    }
    else {
      printf("You muster all your strength and begin building a shelter.\n");
      printf("The sun is getting lower in the sky.\n");
      tme(60);
      printf("You have %d pieces of wood left.\n", wood_index);
      shelter+=1;
    }
  }
  else if (x==3) {
  printf("You venture away from the beach and towards the jungle.\n");
  }
  else if (x==4) {
  }
  else {
  printf("error handling");
  }
printf("Even after waking up you still can't believe what's happened.\n");
printf("You had hoped - prayed - that morning would free you from this nightmare. But as the sun rises, reality\n");
printf("only sinks deeper. You're still here. Trapped. Forced to survive.\n");
printf("As you push yourself up, scanning yout surroundings, something catches your eye - a disturbance in the\n");
printf("sand that wasn't there last night\n");
printf("Approaching causiously, your mind struggles to process what your seeing. But the realization quickly\n");
printf("curdles into terror as deep, clawed footprints come into full view\n");
printf("Your heart pounds. Your breath turns shallow and ragged. Sweat beads down your forehead.\n");
printf("You're not alone on this island.");
printf("And whatever is here with you... is massive\n");
return 0;
}
  
