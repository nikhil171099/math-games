#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void martingaleProblem()
{
  srand(time(0));
  long tries = 100000000;
  double td = 0, bc = 0;
  for(long k =  0; k < tries; k++)
  {
    int ct = 0, mon = 63, stake = 1;
    while(mon >= 0)
    {
      td += 1;
      if(rand()%2 == 1)
      {
        break;
      }
      else
      {
        if(mon == 0)
        {
          bc += 1;
          break;
        }
        else
        {
          mon -= stake;
          stake *= 2;
          if(stake > (int)(mon))
          {
            bc += 1;
            break;
          }
        }
      }
    }
    //printf("%d\n", stake);
  }
  double oper = td/tries;
  printf("After 100 Million simulations of the Martingale solution,\n\n");
  printf("The number of rounds before success is : %0.2f \n",oper);
  printf("The number of bankruptcies are : %0.2f million \n",bc/1000000);
  printf("The bankruptcy percentage is : %0.2f %%\n",100*bc/tries);
}