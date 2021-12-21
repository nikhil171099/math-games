#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void superRationality()
{
  srand(time(0));
  long tries = 10000000;
  long double srt = 0, ran = 0;
  for(long k =  0; k < tries; k++)
  {
    int nresp_ran = 0, nresp_srt = 0;
    for(int i = 0; i < 20; i++)
    {
      if(rand()%2 == 1)
      {
        nresp_ran++;
      }
      if(rand()%20 == 0)
      {
        nresp_srt++;
      }
    }
    if(nresp_ran == 1)
    {
      ran += 1;
    }
    if(nresp_srt == 1)
    {
      srt += 1;
    }
  }
  double csrt = 100*srt/tries, cran = 100*ran/tries;
  printf("After 10 Million simulations of the Euler dice game,\n\n");
  printf("The odds of winning by randomness is : %0.2f %%\n", cran);
  printf("The odds of winning by super rationality is  : %0.2f %%\n",csrt);
}