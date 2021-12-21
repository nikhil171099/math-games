#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<sys/time.h>
#include <time.h>
#include "required.h"

void shuffle(int *arr, size_t n)
{
  for (int i = n-1; i > 0; i--)
  {
        int j = rand() % (i+1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
  }
}

void shuffle2D(int arr[3][2], size_t n, size_t m)
{   
  for (int i = m-1; i > 0; i--)
  {
    int j = rand() % (i+1);
    for(int k = 0; k < n; k++)
    {
      int temp = arr[k][i];
      arr[k][i] = arr[k][j];
      arr[k][j] = temp;
    }
  }
  for (int i = n-1; i > 0; i--)
  {
    int j = rand() % (i+1);
    for(int k = 0; k < m; k++)
    {
      int t = arr[j][k];
      arr[j][k] = arr[i][k];
      arr[i][k] = t;
    }
  }
}

void roll(int *array, size_t n)
{
    for( int i = 0; i < n; i++)
    {
      array[i] = rand()% 6 + 1;
    }
}

long power(int no)
{
  long val = 10;
  for( int p = 0; p < no; p++)
  {
    val *= 10;
  }
    return val;
}

void timeSpent(clock_t begin, clock_t end)
{
  double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
  printf("\n The time spent for this simulation is : %.2f seconds.", time_spent);
}

void getInfo()
{
  int ch;
  eprintf("Enter the game you want to know about (1 - 13) : ");
  escanf("%d", &ch);
  printf("\n\n----------------------------------------------------------------------------------------------------------------------------\n\n");
  switch(ch)
  {
    case 1:
    {
      printf("This program is a simulation of streaks in a coin toss.\n\n");
      printf("In this game, a coin is flipped 200 times and it's streaks are observed, i.e., we check if there are more\n");
      printf("than a set number of heads and tails that occur one after another. The streaks observed are 5, 6, 7, 8, and 9.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and the probability for each\n");
      printf("of the streaks are observed.\n"); 
      printf("For more information, watch the video : https://www.youtube.com/watch?v=DntEoGG7RyY&t=426s\n\n");
      break;     
    }
    case 2:
    {
      printf("This program is a simulation of a coin toss doubler game (Infinite money paradox or St. Petersburg paradox).\n\n");
      printf("In this game, a coin is flipped and if it's a heads, the player gets 4 dollars, but if the player gets tails,\n");
      printf("then he gets 2 dollars. Then, this can be repeated until the player gets tails, so the potential earning is infinite.\n");
      printf("The thing explained above is one simulation! This is simulated 100 million times and the average earning is calculated.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=RBf1s4TassI&t=538s\n\n");
      break; 
    }
    case 3:
    {
      printf("This program is a simulation of the double sixes death game.\n\n");
      printf("In this game, two dice are rolled, and if we get a double six, all people in the room die. If the people survive,\n");
      printf("then for the next round, 10 times as many people are taken in and the same process is repeated until a \n");
      printf("double six is rolled. Therefore, the people in the room increase as 1, 10, 100, 1000, 10000, 100000, and so on\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find a player's odd of\n");
      printf("survival for any random given round, then we calculate a player's odds of death from an outsider's perspective\n");
      printf("and then the average number of rounds before death is found. \n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=Uyw7d579nxY\n\n");
      break; 
    }
    case 4:
    {
      printf("This program is a simulation of the googol game.\n\n");
      printf("In this game, we have 10 hidden sheets of paper with numbers in them. A player can start at sheet 1 and stop when\n");
      printf("the player feels that the one the player stopped on is the highest number. Here, two methods are compared, one\n");
      printf("being the random method and one being the optimal stopping strategy. In this strategy, we first flip 10/e number\n");
      printf("of sheets (4 sheets) and stop at the sheet first sheet that provides higher number than any in the 4 sheet.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find a player's odds of\n");
      printf("winning using random stopping and compare it to the player's odds of winning using optimal stopping strategy.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=OeJobV4jJG0&t=333s\n\n");
      break; 
    }
    case 5:
    {
      printf("This program is a simulation of the Humble Nishiyama card game.\n\n");
      printf("In this game, a deck of card is shuffled and player1 chooses an order of three cards like RRR, RBR, BBB and so on.\n");
      printf("for the given player1 order, player 2 chooses an order of his own. In the random one, he picks a random order and\n");
      printf("according to the Humble Nishiyama order, player 2 chooses a specific order where the first card is the opposite of\n");
      printf("player 1's middle card and the rest two are the first and second card of player 1's cards. Ex: for RBR it is RRB.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find a player's odds of\n");
      printf("winning using random choice and compare it to the player's odds of winning using Humble Nishiyama strategy.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=s4tyO4V2im8&t=532s\n\n");
      break; 
    }
    case 6:
    {
      printf("This program is a simulation of the Martingale's solution.\n\n");
      printf("In this game, a game is played with a stake and which had a 50%% chance of winning. If the player looses, then \n");
      printf("the player has to double the stakes until a profit is made or the player is bankrupt. The stakes go like 1, 2, 4, 8, etc.\n");
      printf("The thing explained above is one simulation! This is simulated 100 million times and we find the averge number of\n");
      printf("turns before earning a profit using Martingale's solution. Then the number of bankrupcies and it's percentage are calculated.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=DntEoGG7RyY&t=426s\n\n");
      break; 
    }
    case 7:
    {
      printf("This program is a simulation of the Miltersen's 100 boxes game\n\n");
      printf("In this game, there are 100 boxes numbered and each box has a unique number between 1 and 100. Then, the first player has\n");
      printf("to find player 1's number (i.e., 1) in one of the boxes. Player 1 can only open 50 boxes and after the process, all the\n");
      printf("boxes are closed and player 1 is taken away so that no future player is informed of the location. This process is repeated\n");
      printf("for the next 99 players. The group succeeds if all manage to find their number within 50 tries. There is a random search \n");
      printf("method and the other method is Miltersen's cycle. In this method, a player first opens the box number corresponding to the\n");
      printf("player's number and the number in the box is the next box number the player opens until the player finds the player number.\n");
      printf("The thing explained above is one simulation! This is simulated 40 thousand times and we find the success percentage\n");
      printf("using random method and compare it to the percentage of success using miltersen's cycle.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=kOnEEeHZp94\n\n");
      break; 
    }
    case 8:
    {
      printf("This program is a simulation of the Monty hall game\n\n");
      printf("In this game, there are 3 boxes. One contains a million dollars and the other two are empty. First, a player has to choose\n");
      printf("one of the three boxes. Then, one other box that doesn't contain anything is shown and the player is given an option to\n");
      printf("keep their choice or switch boxes. Here, three cases are considered. One where the player keeps hsi first chosen box, second\n");
      printf("where the player always switches and third where the player randomly swithces or decides not to switch for each case.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find the success percentage\n");
      printf("using random choice, no switching choice and always switching choice.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=kJzSzGbfc0k\n\n");
      break; 
    }
    case 9:
    {
      printf("This program is a simulation of the Newton Pepy's dice problem\n\n");
      printf("Here, first, a set of 6 dice is thrown and checked if alteast one 6 occured. Then, a set of 12 dice is thrown and checked\n");
      printf("if atleast two 6s occured and then a set of 18 dice is thrown and checked if alteast three 6s occured. \n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find the success percentage\n");
      printf("of getting one 6 in a set of 6 dice, two 6s in a set of 12 dice and three 6s in a set of 18 dice.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=RFlTawWwLZc\n\n");
      break; 
    }
    case 10:
    {
      printf("This program is a simulation of the Russian roulette.\n\n");
      printf("This program tests the percentage of success of the player who starts first to that of the second. There are three types\n");
      printf("of Russian roulette, one with no spin, one with spin and one with equalized spin where if one misses, then the next is \n");
      printf("given n+1 terms, ex 1, 2, 3, 4 where player 1 gets 1, 3, 5, 7 ... and player 2 gets 2, 4, 6, 8 ... turns until one dies.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find the success percentage\n");
      printf("player 1 with respect to player 2 for each of the three games.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=Xtl9orvkDVo\n\n");
      break; 
    }
    case 11:
    {
      printf("This program is a simulation of the Euler dice game (Platonia dilemma).\n\n");
      printf("This program has a situation where 20 people who are not supposed to meet each otherare sent a letter and only if \n");
      printf("one replies, they all get the money. There are two ways, one where each player decide by themselves whether they want\n");
      printf("to respond and where they use super rationality where all roll a 20 side die and only respond if they get a 1.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find the success percentage\n");
      printf("for the random method and compare it to the super rational method.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=NkYCWqzBc7M\n\n");
      break; 
    }
    case 12:
    {
      printf("This program is a simulation of the Bertnand gold ans silver coin box game (Bertnand's paradox).\n\n");
      printf("This program has a situation where there are three boxes, one with 2 gold coins, one with two silver coins and one with \n");
      printf("one gold and one silver coin. We don't know the content of each box as they are closed. Then, we can opean a box at \n");
      printf("random and pick a coin at random. Given that the coin is gold, the question is what is the other coin? Here there are\n");
      printf("three sets, one that the other coin is also gold, two that the other coin is silver and three that it can be random.\n");
      printf("The thing explained above is one simulation! This is simulated 10 million times and we find the success percentage\n");
      printf("for the always same coin, always different coin and random coin.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=ytfCdqWhmdg\n\n");
      break; 
    }
    case 13:
    {
      printf("This program is a simulation of the Parrondo's two games (Parrondo's paradox).\n\n");
      printf("This program has a situation where there are two games, game A and game B. Game a plays a classic roulette where you have\n");
      printf("a 49.5% chance of winning. If the player wins, player earns 1$ and by loosing, player loses 1$. Then, we look at game B where\n");
      printf("it has two games. If the money that the player has is a multiple of three, then the player playes game B1 where the chances\n");
      printf("of winning are 9.5%%. If the player wins, player earns 5$ and by loosing, player loses 5$. Else, the player plays game B2\n");
      printf("where the chances of winning are 74.5%%. If the player wins, player earns 3$ and by loosing, player loses 3$. The player gets\n");
      printf("100 tries and the final money is calculated. There are four scenarios, one where player only playes game A 100 times, two where\n");
      printf("player only plays game B 100 times, three where player plays game A when the money left is a multiple of 3 and game B when\n");
      printf("not so and finally four where player switches between game A and game B randomly and plays a total of 100 times.\n");
      printf("The thing explained above is one simulation! This is simulated 200 thousand times and we find the earning percentage\n");
      printf("for each of the four cases.\n");
      printf("For more information, watch the video : https://www.youtube.com/watch?v=PpvboBJEozM\n\n");
      break; 
    }
    default:
    {
      printf("Wrong choice!!Please choose between 1 and 13!\n\n");
      break;
    }
  }
}