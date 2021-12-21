#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

Struct repeat()
{
    Struct s;
    printf("\n\n----------------------------------------------------------------------------------------------------------------------------\n\n");
    eprintf("Do you want to play another time?(y/n) : ");
    char c;
    escanf("%c", &c);
    s.rep = false;
    if(c == 'y' || c == 'Y')
    {
        s.rep = true;
        s.clr = false;
        eprintf("Do you want to clear the screen?(y/n) : ");
        char scr;
        escanf("%c", &scr);
        if(scr == 'y' || scr == 'Y')
        {
            s.clr = true;
        }
    }
    printf("\n\n");
    return s;
}

void math_app()
{
    system("clear");
    printf("Welcome to the simulation game!\n\n");
    bool flag = true;
    while(flag)
    {
        printf("Let's start then!\n\n");
        printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
        printf("\n\nWelcome to the game simulator. Pleae select one from the below options: \n\n");
        printf("1.  Streaks in a coin toss.\n");
        printf("2.  Doubler coin toss game.\n");
        printf("3.  Double sixes death game.\n");
        printf("4.  Googol game with 10 slips.\n");
        printf("5.  Humble Nishiyama card game\n");
        printf("6.  Martingale's betting solution.\n");
        printf("7.  Miltersen's 100 boxes game.\n");
        printf("8.  Monty hall problem.\n");
        printf("9.  Newton Pepy's dice problem.\n");
        printf("10. Russian roulette game.\n");
        printf("11. Euler's dice game.\n");
        printf("12. Bertnand's gold silver coin box game.\n");
        printf("13. Parrondo's two game paradox.\n");
        printf("14. Get information on games.\n");
        printf("15. Exit Program.\n");
        eprintf("\n");
        int ch;
        escanf("%d", &ch);
        printf("\n----------------------------------------------------------------------------------------------------------------------------\n\n");
        switch(ch)
        {
            case 1:
            {
                clock_t begin = clock();
                coinStreaks();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 2:
            {
                clock_t begin = clock();
                doublerGame();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 3:
            {
                clock_t begin = clock();
                doubleSixesDeathGame();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 4:
            {
                clock_t begin = clock();
                googolGame();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 5:
            {
                clock_t begin = clock();
                humbleNishiyama();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 6:
            {
                clock_t begin = clock();
                martingaleProblem();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 7:
            {
                clock_t begin = clock();
                miltersenGame();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 8:
            {
                clock_t begin = clock();
                montyHall();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 9:
            {
                clock_t begin = clock();
                newtonPepy();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 10:
            {
                clock_t begin = clock();
                russianRoulette();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 11:
            {
                clock_t begin = clock();
                superRationality();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 12:
            {
                clock_t begin = clock();
                bertnandBox();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 13:
            {
                clock_t begin = clock();
                parrondoParadox();
                clock_t end = clock();
                timeSpent(begin, end);
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
            case 14:
            {
                printf("\n\n");
                getInfo();
                printf("\n\n----------------------------------------------------------------------------------------------------------------------------\n\n");
                break;
            }
            case 15:
            {
                flag = false;
                break;
            }
            default:
            {
                printf("Please choose between 1 and 15!\n\n");
                Struct s = repeat();
                if(s.clr)
                {
                    system("clear");
                }
                if(!s.rep)
                {
                    flag = false;
                }
                break;
            }
        }
        if(!flag)
        {
            printf("Thank you for playing the simulation games!\n\n");
            break;
        }
    }
}