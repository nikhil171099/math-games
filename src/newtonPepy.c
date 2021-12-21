#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void newtonPepy()
{
  srand(time(0));
  long tries = 10000000;
  long double one = 0, two = 0, three = 0;
  for(long k =  0; k < tries; k++)
  {
    int on[6], tw[12], thr[18];
    roll(on, 6);
    roll(tw, 12);
    roll(thr, 18);
    int c1 =0, c2 = 0, c3 = 0;
    for(int i = 0; i < 18; i++)
    {
      if(thr[i] == 6)
      {
        c3++;
      }
      if(i<12)
      {
        if(tw[i] == 6)
        {
          c2++;
        }
        if(i<6)
        {
          if(on[i] == 6)
          {
            c1++;
          }
        }
      }
    }
    if(c1 > 0)
    {
      one += 1;
    }
    if(c2 > 1)
    {
      two += 1;
    }
    if(c3 > 2)
    {
      three += 1;
    }
  }
  double cone = 100*one/tries, ctwo = 100*two/tries, cthr = 100*three/tries;
  printf("After 10 Million simulations of the Newton Pepy's problem,\n\n");
  printf("The odds of atleast one six appearing in a six die roll is  : %0.2f %%\n",cone);
  printf("The odds of atleast two sixes appearing in a twelve die roll is  : %0.2f %%\n",ctwo);
  printf("The odds of atleast three sixes appearing in an eighteen  die roll is  : %0.2f %%\n",cthr);
}