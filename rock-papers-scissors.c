#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
int Userchoice();
int computerchoice();
void checkWinner(int user, int computer);


int main(){
  srand(time(NULL));
  /*initialized the seed value so that it can be used in future*/
  printf("----rock-paper-scissors----\n");
  while(true)
  {
    int user = Userchoice();//storing function userchoice in here
    int computer = computerchoice();//storing function computerchoice in here
    checkWinner(user, computer);//using checkWinner function in here so that we can get the winner
  }

    
  return 0;
}
int Userchoice()
{
  int choice;//initializing choice int variable
  printf("\nEnter your choice (1) for rock (2) for paper (3) for scissors)");
  scanf("%d", &choice);//storing in the location choice
  while (choice < 1 || choice > 3)
  {//checking wheather the input is valid?
    printf("Invalid please select the desired option in here: ");
    scanf("%d", &choice);
  }
  return choice;
}
int computerchoice()
{
  return (rand() % 3) + 1;
}
void checkWinner(int user, int computer)
{
  printf("\n");  
      if(user == computer)
        {/*
          we are checking wheather
          the both conditions be equal or not in
          here
          */
          printf("it is a tie!!!");
        }
      else if
        ((user == 1 && computer == 3)||//rock beats scissors
         (user == 2 && computer == 1)||//paper beats rock
         (user == 3 && computer == 2))//scissors beats paper
        {        
          printf(" you won the game --:)");
        }
      //chutiya yv
      else //nothing much to explain in here
        {
          printf("you've lost the game --:(");
        }
}
