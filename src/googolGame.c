#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void googolGame()
{
  srand(time(0));
  long tries = 10000000;
  long double eu = 0, ran = 0;
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int size = 10, sc = 4;
  for(long k =  0; k < tries; k++)
  {
    shuffle(arr, 10);
    int max = 9;
    int ranst = rand()%size;
    if(arr[ranst] == max)
    {
      ran += 1;
    }
    int lmax = -1;
    for(int i = 0; i < sc; i++)
    {
      if(arr[i] > lmax)
      {
        lmax = i;
      }
    }
    int flag = 0;
    for(int i = sc; i < size; i++)
    {
      if(arr[i] > arr[lmax])
      {
        flag = 1;
        lmax = i;
        break;
      }
    }
    if (flag == 0)
    {
      lmax = 9;
    }
    if(arr[lmax] == max)
    {
      eu += 1;
    }
  }
  double ceuc = 100*eu/tries, cran = 100*ran/tries;
  printf("After 10 Million simulations of the Googol game,\n\n");
  printf("The odds of winning it by using optimal stopping strategy is : %0.2f %%\n",ceuc);
  printf("The odds of winning it by using random stopping is  : %0.2f %%\n",cran);
}
