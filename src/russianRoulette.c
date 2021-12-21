#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void russianRouletteNormal()
{
  srand(time(0));
  long tries = 10000000;
  long double one = 0, two = 0;
  for(long k =  0; k < tries; k++)
  {
    if((rand()%6)% 2 == 0)
    {
      one += 1;
    }
    else
    {
      two += 1;
    }
  }
  double cone = 100*one/tries, ctwo = 100*two/tries;
  printf("After 10 Million simulations of the Russian Rouette without spin,\n\n");
  printf("The odds of the first player winning is : %0.2f %%\n",cone);
  printf("The odds of the second player winning is  : %0.2f %%\n",ctwo);
}

void russianRouletteSpin()
{
  srand(time(0));
  long tries = 10000000;
  long double one = 0, two = 0;
  for(long k =  0; k < tries; k++)
  {
    int gun = 0, z = 0;
    while(z == 0)
    {
      gun = rand()%6;
      if(gun == 0)
      {
        one += 1;
        z = 1;
        break;
      }
      gun = rand()%6;
      if(gun == 0)
      {
        two += 1;
        z = 1;
        break;
      }
    }
  }
  double cone = 100*one/tries, ctwo = 100*two/tries;
  printf("After 10 Million simulations of the normal Russian Rouette with spin,\n\n");
  printf("The odds of the first player winning is : %0.2f %%\n",cone);
  printf("The odds of the second player winning is  : %0.2f %%\n",ctwo);
}

void russianRouletteSpinEq()
{
  srand(time(0));
  long tries = 10000000;
  long double one = 0, two = 0;
  for(long k =  0; k < tries; k++)
  {
    int gun = 0, z = 0;
    int count = 1;
    while(z == 0)
    {
      for(int y = 0; y < count; y++)
      {
        gun = rand()%6;
        if(gun == 0)
        {
          one += 1;
          z = 1;
          break;
        }
      }
      if(z == 1)
      {
        break;
      }
      count++;
      for(int y = 0; y < count; y++)
      {
        gun = rand()%6;
        if(gun == 0)
        {
          two += 1;
          z = 1;
          break;
        }
      }
      if(z == 1)
      {
        break;
      }
      count++;
    }
  }
  double cone = 100*one/tries, ctwo = 100*two/tries;
  printf("After 10 Million simulations of the equalized Russian Rouette with spin,\n\n");
  printf("The odds of the first player winning is : %0.2f %%\n",cone);
  printf("The odds of the second player winning is  : %0.2f %%\n",ctwo);
}

void russianRoulette()
{
  russianRouletteNormal();
  printf("\n\n");
  russianRouletteSpin();
  printf("\n\n");
  russianRouletteSpinEq();
}