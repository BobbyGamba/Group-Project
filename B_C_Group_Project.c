#include <stdio.h>
#include <unistd.h>
#include "index.h"

void clr() {
    while ( getchar() != '\n' );
}

int main() {
int x, i, rc, shelter = 0;
char y[30], choice1, choice2;
 
/*FILE * f=fopen("island.txt","r"); 
    for (i = 0; i <=10; i++) {
        fgets(y, 30, f);
        printf("%s\n", y);
    }
    */
printf("You awaken to the sounds of waves crashing on the beach.\n");
printf("The water splashes on your face as the waves effortlessly throw you onto the shore.\n");
sleep(2);
printf("You stumble too your feet trying to grasp the situation you find youself in.\n");
printf("Before you stands a forest of palm trees towering over you and to your sides a white sand beach that curves to an end you can't see.\n");
sleep(2);
printf("Scanning your surroundings you try to wake up from this new terrible nightmare.\n");
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
  }
  if (x == 1) { 
    printf("You try yelling for help, screaming until you can't anymore but your cries fall upon the deaf ears of the trees\n");
    sleep(2);
  }
  else if (x == 2) {
    printf("Frantically, you run up and down the beach, not daring to dive into the thick growth of the jungle,\n");
    printf("trying to find someone, anyone but to no avail. You return to the spot where you ashed to shore\n");
      sleep(2);
  }
  else if (x == 3) {
    printf("Overcome by emotions of grief and despair you fall to your knees and begin to cry. With tears\n");
    printf("running down your face you hear the sound of your own wailing echoing through the trees and bouncing back to you.\n");
    printf("The twisting vines of the trees distorts the sound and it's almost as if the jungle is laughing at you\n");
    sleep(2);
    }
  printf("Accepting your new reality you sit back down on the beach when your adrenaline fianlly fades away, and hungry and thirst become your new focus\n");
  printf("These are your hunger and thirst levels. They will start at 100 points and you need to eat and drink to maintain them.\n");
    sleep(2);
  printf("If they fall too low you will become weaker and unable to perform as many tasks and if either reach 0 you will die.\n");
  printf("You look off into the horizon and try to guess what time of day it is. With the sun still beating down on you heavily you guess it is around 14:00.\n");
  printf("You only have a few hours before sunset at 19:00.\n");
  sleep(4);
    while (hours<19) {
      printf("1. Collect wood\n");
      printf("2. Build a shelter\n");
      printf("3. Find food\n");
      printf("4. Find water\n");
      rc = scanf("%d", &x);
        if (rc != 1) {
            clr();
        }
        while (x != 1 && x !=2 && x != 3 && x != 4) {
            printf("Please enter a 1, 2, 3, or 4");
             rc = scanf("%d", &x);
                if (rc != 1) {
                    clr();
                }
        }
        if (x==1) {
          collectingwood();
        }
        else if (x==2) {
          if (wood_index<8) {
            printf("You do not have enough wood to build a shelter.\n"); 
              sleep(1);
          }
          else {
            printf("You muster all your strength and begin building a shelter.\n");
            printf("The sun is getting lower in the sky.\n");
            sleep(2);
            tme(60);
            wood_index= wood_index-8;
            printf("You have %d pieces of wood left.\n", wood_index);
            shelter+=1;
          }
        }
        else if (x==3) {
          printf("You venture away from the beach and towards the jungle.\n");
          printf("The tropical forest is so dense, scarce light gets in.\n");
          sleep(3);
          printf("As you go deeper and deeper you begin to lose hope. Everything is unfamiliar, green, and inedible.\n");
          printf("What if there is no food for you here?\n");
          tme(30);
          sleep(4);
          printf("You find a grove of wild blackberries.\n");
          printf("Would you like to collect some? (1. Yes or 2. No)");
          rc = scanf(" %d", &choice1);
            if (rc != 1) {
                clr;
            }
          while( choice1 != 1 && choice1 != 2) {
              printf("Please enter a 1 or 2");
              rc = scanf("%d", &choice1);
                  if (rc != 1) {
                      clr();
                  }
          }
            if (choice1==1) {
              printf("You decide to use your shirt as a satch.\n");
              sleep(1);
              printf("How many would you like to collect?");
              scanf("%d",&blackberries);
              tme(5);
            }
          printf("Would you like to keep searching for more food? (1. Yes or 2. No");
          rc = scanf(" %d", &choice2);
            if (rc != 1) {
                clr();
            }
            while(choice2 !=1 && choice2 !=2) {
                printf("Please enter a 1 or 2");
                rc = scanf("%d", &choice2);
                    if (rc != 1) {
                        clr();
                    }
            }
            if (choice2==1) {
              printf("You keep venturing deeper into the jungle.\n");
              printf("In the distance you see a tree with what looks to be yellow fruit on it.\n");
              sleep(3);
              printf("As you get closer you find the tree heavy with clusters of bananas.\n");
              tme(20);
              printf("How many would you like to collect?");
              scanf("%d", &bananas);
              tme(30);
            }
          printf("You head back to the beach with your bounty.\n");
          sleep(2);
            if (shelter==1) {
              printf("You can't find your camp.\n");
              printf("left or right? (L or R)");
              rc=scanf(" %c", &choice2);
                if (choice2=='L') {
                  printf("You walk along the shore for 20 minutes and can't find your camp so you turn back.\n");
                  tme(40);
                }
                else {
                  printf("After 10 minutes of walking along the shore you find your shelter.\n");
                  tme(10);
                }
            }
        }
        else if (x==4) {
          printf("You cannot drink seawater so you make your way into the jungle to find freshwater.\n");
          sleep(2);
          printf("Will you go left or right? (1. Left or 2. Right)");
          rc = scanf("%d", &choice1);
            if(rc != 1) {
                clr();
            }
            while(choice1 != 1 && choice1 != 2) {
                printf("Please enter a 1 or 2");
                rc = scanf("%d", &choice1);
                    if(rc != 1) {
                        clr();
                    }
            }
            if (choice1==1) {
              printf("As you make your way through the foliage you find a coconut tree.\n");
              sleep(3);
              printf("At the base you find an old coconut split in half. You can use this to collect a small amount of water.\n");
              sleep(3);
              printf("You follow the sounds of water until you find a stream and begin drinking as much water as you can.\n");
              sleep(3);
              thirst(100);
              sleep(3);
              printf("You fill up your coconut with water and head back to the beach.\n");
              tme(60);
            }
            else if (choice1==2){
              printf("You find a small river and drink water until you're full.\n");
                sleep(2);
              thirst(100);
              printf("You head back to the beach.\n");
              tme(20);
            }
        }
    }
printf("The sun has set and exhaustion settles down upom you.\n");
    if (shelter==1){
        printf("You cuddle up under your makeshift shelter and let sleep overtake you.\n");
    }
    else {
        printf("With no shelter, you decide to lay down under a tree to sleep until morning comes.\n");
    }
spider();
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
  
