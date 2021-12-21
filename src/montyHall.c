#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void montyHall() 
{
  srand(time(0));
  long tries = 50000000;
  
  long double ran = 0, swi = 0, nswi = 0;
  for(long k = 0; k < tries; k++)
  {
    int door[] = {0, 0, 0};
    door[rand()%3] = 1;
    int choice = rand()%3;
    int nc = -1, swn = -1;
    for(int i = 0; i < 3; i++)
    {
      if(door[i] != 1 && i != choice)
      {
        nc = i;
      }
    }
    for(int i = 0; i < 3; i++)
    {
      if(i != choice && i != nc)
      {
        swn = i;
      }
    }
    int ra = rand()%2;
    if(ra == 0)
    {
      ra = choice;
    }
    else
    {
      ra = swn;
    }
    if(door[swn] == 1)
    {
      swi += 1;
    }
    if(door[choice] == 1)
    {
      nswi += 1;
    }
    if(door[ra] == 1)
    {
      ran += 1;
    }
    
  }

  double csw = 100*swi/tries, cns = 100*nswi/tries, cra = 100*ran/tries;
  printf("After 50 Million simulations of the Monty Hall game,\n\n");
  printf("The odds winning by switching is : %0.2f %%\n",csw);
  printf("The odds of winning by not switching is  : %0.2f %%\n",cns);
  printf("The odds of winning by random decision is  : %0.2f %%\n",cra);
}