#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void doubleSixesDeathGame()
{
  srand(time(0));
  long tries = 10000000;
  double td = 0;
  for(long k =  0; k < tries; k++)
  {
    int trnd = 0;
    for(int i = 1; i > 0; i *= 10)
    {
      trnd += 1;
      if(rand()%36 == 0)
      {
        break;
      }
    }
    td += trnd;
  }
  double oper = 100.0-90.0;
  double uper = 3500.0/36.0;
  printf("After 10 Million simulations of the Double Death Sixes Game,\n\n");
  printf("The odds of your survival in any given round is  : %0.2f %%\n",uper);
  printf("The odds of your survival according to an outsider is : %0.2f %%\n",(oper));
  printf("The average number of turns before death is : %0.2f \n",td/tries);
}