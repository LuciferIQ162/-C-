#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
//including all the necessary Libraries

void checkBalance(float balance);
float deposit();
float withdraw(float balance);
//function prototyping

int main(){
  
  int choice = 0;
  float balance = 0.0f;
  //variable initialization
  printf("*** WELCOME TO THE BANK ***");
  do
  {
    //giving all the options to the user:)
    printf("\nSelect an option: \n");
    printf("\n1. check balance\n");
    printf("2. deposite money\n");
    printf("3. withdraw money\n");
    printf("4. exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    if(choice > 4)
      {
        printf("please enter the valid option only: ");
        scanf("%d", &choice);
        break;
      }
    else 
      {
        //applying a switch here to understand the context around that here
        switch(choice)
        {
          case 1:
          {
            checkBalance(balance);
            break;
          }
          case 2:
          {
            balance += deposit();
            printf("Your balance now is: %f", balance);
            break;
          }
          case 3:
          {
            balance -= withdraw(balance);

            break;
          }
        }
      }

  }while(choice != 4);
  printf("----thanks for using our bank\n"
         "----come again please");

  return 0;
}

//this is pretty simple function which just prints the value of param
void checkBalance(float balance){
  printf("your current balance is: %f", balance);
}


/*this function just asks for a floating value and
then stores it in a variable*/
float deposit(){
  float added = 0.0;
  printf("How much money you want to deposit\nIn rupees: ");
  scanf("%f", &added);
  return added;
}


/*this function accepts a parameter and then
stores it in a variable and then return it*/
float withdraw(float balance){
  float withdrawal = 0.0;
  printf("How much money you want to Withdraw\nIn rupees:");
  scanf("%f", &withdrawal);
  return withdrawal;
}