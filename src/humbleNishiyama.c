#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void humbleNishiyama()
{
  srand(time(0));
  int card[] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
  long tries = 10000000;
  long double uwin = 0,rwin = 0, cwin = 0;
  for(long k =  0; k < tries; k++)
  {
    shuffle(card, 52);
    int user[3], comp[] = {1, 1, 1}, random[3];
    for(int i = 0; i < 3; i++)
    {
      user[i] = card[rand()%51];
      random[i] = card[rand()%51];
    }
    if (user[1] == 1)
    {
        comp[0] = 0;
    }
    else
    {
      comp[0] = 1;
    }
    comp[1] = user[0];
    comp[2] = user[1];
    int cmp[] = {card[0], card[1], card[2]};
    for(int j = 0; j < 52; j++)
    {
      if((user[0]==cmp[0])&&(user[1]==cmp[1])&&(user[2]==cmp[2]))
      {
        uwin += 1;
        break;
      }
      else if ((comp[0]==cmp[0])&&(comp[1]==cmp[1])&&(comp[2]==cmp[2]))
      {
        cwin += 1;
        break;
      }
      cmp[0] = cmp[1];
      cmp[1] = cmp[2];
      cmp[2] = card[j];
    }
    cmp[0] = card[0];
    cmp[1] = card[1];
    cmp[2] = card[2];
    for(int j = 0; j < 52; j++)
    {
      if((user[0]==cmp[0])&&(user[1]==cmp[1])&&(user[2]==cmp[2]))
      {
        uwin += 1;
        break;
      }
      else if ((random[0]==cmp[0])&&(random[1]==cmp[1])&&(random[2]==cmp[2]))
      {
        rwin += 1;
        break;
      }
      cmp[0] = cmp[1];
      cmp[1] = cmp[2];
      cmp[2] = card[j];
    }
  }
  double cper = 100*cwin/tries, rper = 100*rwin/tries;
  printf("After 10 Million simulations of the Humble Nishiyama game,\n\n");
  printf("The odds of winning it by using a random choice is : %0.2f %%\n",rper);
  printf("The odds of winning it by using the strategy is : %0.2f %%\n",cper);
}