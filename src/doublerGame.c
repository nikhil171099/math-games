#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void doublerGame() 
{
  srand(time(0));
  long tries = 100000000;
  long double win = 0;
  for(long k =  0; k < tries; k++)
  {
    int money = 2, z = 0;
    while(z == 0)
    {
      if((rand()%2) == 1)
      { 
        money *= 2;
      }
      else
      {
        z = 1;
        break;
      }
    }
    win += money;
  }
  printf("After 100 Million simulations of the infinite doubler game,\n\n");
  double cval = win/tries;
  printf("The average earning is : $%0.2f \n",cval);
}
