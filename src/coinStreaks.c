#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void coinStreaks() 
{
  srand(time(0));
  long tries = 1000000;
  long double streak[] = {0, 0, 0, 0, 0};

  for(long k = 0; k < tries; k++)
  {
    int count = 0, s5 = 0, s6 = 0, s7 = 0, s8 = 0, s9 = 0;
    for(int i = 0; i < 200; i++)
    {
      int toss = rand()%2;
      int chc = 0;
      if(count == 0)
      {
        chc = toss;
        count++;
      }
      else
      {
        if(toss == chc)
        {
          count++;
        }
        else
        {
          if(count == 5)
          {
            s5++;
          }
          if(count == 6)
          {
            s6++;
            s5++;
          }
          if(count == 7)
          {
            s7++;
            s6++;
            s5++;
          }
          if(count == 8)
          {
            s8++;
            s7++;
            s6++;
            s5++;
          }
          if(count == 9)
          {
            s9++;
            s8++;
            s7++;
            s6++;
            s5++;
            break;
          }
          count = 0;
        }
      }        
    }
    if(s5 > 0)
    {
      streak[0] += 1;
    }
    if(s6 > 0)
    {
      streak[1] += 1;
    }
    if(s7 > 0)
    {
      streak[2] += 1;
    }
    if(s8 > 0)
    {
      streak[3] += 1;
    }
    if(s9 > 0)
    {
      streak[4] += 1;
    }
  }
  double c5 = 100*streak[0]/tries, c6 = 100*streak[1]/tries, c7 = 100*streak[2]/tries, c8 = 100*streak[3]/tries, c9 = 100*streak[4]/tries;
  printf("After 10 Million simulations of 200 coin tosses,\n\n");
  printf("The odds of getting 5 tosses in a row is : %0.2f %%\n",c5);
  printf("The odds of getting 6 tosses in a row is : %0.2f %%\n",c6);
  printf("The odds of getting 7 tosses in a row is : %0.2f %%\n",c7);
  printf("The odds of getting 8 tosses in a row is : %0.2f %%\n",c8);
  printf("The odds of getting 9 tosses in a row is : %0.2f %%\n",c9);
}
