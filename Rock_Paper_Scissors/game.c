#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

 int x, player = 0, cpu = 0;
 char type, play = 'y';


 while(play == 'y')
 {

 srand(time(0));
 x = rand() % (2 + 1 - 0) + 0;
 system("cls");                                //Must be "clear" on linux.
 printf("\nType Rock, Paper or Scisors: ");
 scanf("%c", &type);
 fflush(stdin);
 type = toupper(type);


 switch(x)
 {
  case 0: //rock
  if(type == 'R')
  {
    printf("\nDraw!");
  }
  else if(type == 'P')
  {
   printf("\nYou won!");
   player++; 
  }
  else if(type == 'S')
  {
   printf("\nYou lost!");
   cpu++;
  }
  else
  {
   printf("\nYou haven't typed a valid type!");
  }
  break;


  case 1: //paper
  if(type == 'R')
  {
    printf("\nYou lost!");
    cpu++;
  }
  else if(type == 'P')
  {
   printf("\nDraw!"); 
  }
  else if(type == 'S')
  {
   printf("\nYou Won!");
   player++;
  }
  else
  {
   printf("\nYou haven't typed a valid type!");
  }
  break;


  case 2: //scissors
  if(type == 'R')
  {
    printf("\nYou won!");
    player++;
  }
  else if(type == 'P')
  {
   printf("\nYou lost!");
   cpu++; 
  }
  else if(type == 'S')
  {
   printf("\nDraw!");
  }
  else
  {
   printf("\nYou haven't typed a valid type!");
  }
  break;
 
 }

 printf("\n\nType y to continue: "); 
 scanf("%s", &play);
 fflush(stdin);
 }

 system("cls");
 printf("---Scoreboard---\n");
 printf("\nPlayer: %d\n", player);
 printf("CPU: %d\n", cpu);

}
