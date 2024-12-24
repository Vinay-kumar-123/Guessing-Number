#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int random,guess;
  int no_of_guess = 0;
  srand(time(NULL));

  printf("\nWelcome to the world of guessing number\n");
  random = rand() % 100 +1;

  do {
    printf("\n Please enter your Guess between(1 to 100) : ");
    scanf("%d", &guess);
    no_of_guess++;

    if(guess < random){
      printf("Guess a larger number \n");
    }
    else if (guess > random){
      printf("Guess a smaller number \n");
    }
    else {
      printf("\nCongratulation !!! You have successfully guessed the number in %d attempts ", no_of_guess);
    }
  } while ( guess != random);

  printf("thank you \n");


}
