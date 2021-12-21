#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

int gameA(int score)
{
  int ch = rand()%1000;
  if(ch > 495)
  {
    score -= 1;
  }
  else
  {
    score += 1;
  }
  return score;
}

int gameB1(int score)
{
  int ch = rand()%1000;
  if(ch > 95)
  {
    score -= 5;
  }
  else
  {
    score += 5;
  }
  return score;
}

int gameB2(int score)
{
  int ch = rand()%1000;
  if(ch > 745)
  {
    score -= 3;
  }
  else
  {
    score += 3;
  }
  return score;
}

int gameB(int score)
{
  if(score%3 == 0)
  {
    score = gameB1(score);
  }
  else
  {
    score = gameB2(score);
  }
  return score;
}

void parrondoParadox()
{
  clock_t begin = clock();
  srand(time(0));
  long tries = 200000;
  long double ga = 0, gb = 0, lg = 0, ran = 0;
  for(long k =  0; k < tries; k++)
  {
    int ma = 100, mb = 100, ml = 100, mr = 100;
    for(int i = 0; i < 100; i++)
    {
      ma = gameA(ma);
      if(ma <= 0)
      {
        ma = 0;
        break;
      }
    }
    for(int i = 0; i < 100; i++)
    {
      mb = gameB(ma);
      if(mb <= 0)
      {
        mb = 0;
        break;
      }
    }
    for(int i = 0; i < 100; i++)
    {
      if(ml % 3 == 0)
      {
        ml = gameA(ml);
      }
      else
      {
        ml = gameB(ml);
      }
      if(ml <= 0)
      {
        ml = 0;
        break;
      }
    }
    for(int i = 0; i < 100; i++)
    {
      int ra = rand()%2;
      if(ra == 0)
      {
        mr = gameA(mr);
      }
      else
      {
        mr = gameB(mr);
      }
      if(mr <= 0)
      {
        mr = 0;
        break;
      }
    }
    ga += ma;
    gb += mb;
    lg += ml;
    ran += mr;
  }
  double ca = (ga/tries)-100.0, cb = (gb/tries) -100, cl = (lg/tries) - 100, cr = (ran/tries) -100;
  printf("After 200 Thousand simulations of the Parrondo's paradox game,\n\n");
  printf("The winning percentage by playing only game A is : %0.2f %%\n", ca);
  printf("The winning percentage by playing only game B is : %0.2f %%\n",cb);
  printf("The winning percentage by switching between the games logically is : %0.2f %%\n", cl);
  printf("The winning percentage by switching the games randomly is : %0.2f %%\n",cr);
}