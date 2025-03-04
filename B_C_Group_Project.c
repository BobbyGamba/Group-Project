#include <stdio.h>

void clear() {
    while ( getchar() != '\n' );
}

int main() {
int x;
char y[30];
int i;
int rc;
 
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
    clear();
}
while (x != 1 && x !=2 && x != 3) {
    printf("Please enter a 1, 2, or 3");
    rc = scanf("%d", &x);
    if (rc != 1) {
        clear();
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
printf("Accepting your new reality you sit back down on the beach when your adrenaline fianlly fades away, and hungry and thirst become your new focus\n");
printf("These are your hunger and thirst levels. They will start at 100 points and you need to eat and drink to maintain them. If they fall too low\nyou will become weaker and unable to perform as many tasks and if either reach 0 you will die.\n");

return 0;

}
  
