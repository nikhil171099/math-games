#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void miltersenGame()
{
  srand(time(0));
  long tries = 40000;
  long double ran = 0, mal = 0;
  int pos[100], rno[100];
  for(int i = 0; i < 100; i++)
  {
    pos[i] = i;
    rno[i] = i;
  }
  for(long k = 0; k < tries; k++)
  {
    shuffle(pos, 100);
    int check = 0, checkran = 0;
    for(int i = 0; i < 100; i++)
    {
      int att = 0, curr = i, attran = 0, varval = -1;
      for(int s = 0; s < 100; s++)
      {
        if(pos[s] == i)
        {
          varval = s;
          break;
        }
      }
      while(att <= 50)
      {
        if(pos[curr] == i)
        {
          check++;
          break;
        }
        else
        {
          curr = pos[curr];
          att++;
        }
      }
      int count = 0;
      shuffle(rno, 100);
      while(attran <= 50)
      {
        if(rno[count] == i)
        {
          checkran++;
          break;
        }
        else
        {
          attran++;
          count++;
        }
      }
    }
    if(check > 99)
    {
      mal += 1;
    }
    if(checkran > 99)
    {
      ran += 1;
    }
  }
  double csw = 100*mal/tries, cra = 100*ran/tries;
  printf("After 40 Thousand simulations of the 100 boxes game,\n\n");
  printf("The odds winning by using miltersen's cycle is : %0.2f %%\n",csw);
  printf("The odds of winning by random decision is  : %0.2f %%\n",cra);
}