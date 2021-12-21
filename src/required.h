#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>

struct greaterSmaller 
{
    bool rep, clr;
};
  
typedef struct greaterSmaller Struct;

#define eprintf(...) printf(__VA_ARGS__); \
                     fflush(stdout);      \


#define escanf(...)  scanf(__VA_ARGS__); \
                     getchar();      \


int gameA(int score);
int gameB(int score);
int gameB1(int score);
int gameB2(int score);
void getInfo();
long power(int no);
Struct repeat();
void roll(int *array, size_t n);
void russianRouletteNormal(void);
void russianRouletteSpin(void);
void russianRouletteSpinEq(void);
void shuffle(int *array, size_t n);
void shuffle2D(int arr[3][2], size_t n, size_t m);
void timeSpent(clock_t begin, clock_t end);

void bertnandBox(void);
void coinStreaks(void);
void doublerGame(void);
void doubleSixesDeathGame(void);
void googolGame(void);
void humbleNishiyama(void);
void martingaleProblem(void);
void math_app(void);
void miltersenGame(void);
void montyHall(void);
void newtonPepy(void);
void parrondoParadox(void);
void russianRoulette(void);
void superRationality(void);
