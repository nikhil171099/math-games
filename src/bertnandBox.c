#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void bertnandBox()
{
  srand(time(0));
  int box[3][2] = {{1,1},
                   {1,0},
                   {0,0}};
  long tries = 50000000;
  long double uwin = 0, rwin = 0, cwin = 0;
  for(long k =  0; k < tries; k++)
  {
    shuffle2D(box, 3, 2);
    int ch = box[0][0];
    int rch = rand()%2;
    if(box[0][1] == ch)
    {
      cwin += 1;
    }
    else
    {
      uwin += 1;
    }
    if(rch == 0)
    {
      if(box[0][1] == ch)
      {
        rwin += 1;
      }
    }
    else
    {
      if(box[0][1] != ch)
      {
        rwin += 1;
      }
    }
  }
  double cper = 100*cwin/tries, rper = 100*rwin/tries, uper = 100*uwin/tries;
  printf("After 50 Million simulations of the Bertnand's coin game,\n\n");
  printf("The odds of winning it by using the opposite choice is : %0.2f %%\n",uper);
  printf("The odds of winning it by using a random choice is : %0.2f %%\n",rper);
  printf("The odds of winning it by using the same choice is : %0.2f %%\n",cper);
}
