#include <stdio.h>
#include "index.h"
/*Global Variable*/
int hours=14;
int index= 0;

/*Time function*/
int tme(int min) {
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
    if (hours>=24) {
      hours= hours-24;
    }
    printf("%d:00\n", hours);
  }
  else if (index>60) {
    while (index>=60) {
        index=index-60;
        hours= hours+1;
      }
      if (hours>=24) {
        hours= hours-24;
      }
      if (index>=0 && index<10) {
      printf("%d:0%d\n", hours, index);
    }
    else {
    printf("%d:%d\n", hours, index);
    }
    }
    else {
      printf("%d:%d\n", hours, index);
    }
  return 0;
}
