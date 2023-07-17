#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

	int number, guess; 
	int nguesses =1;
	srand(time(0));
	number = rand()%100 + 1; // generates a random number between 1 and 100

	//printf("your random no is %d", number);

	printf("Welcome to the game, I have a number between 1 to 100 , can you guess what it is? , Let's start \n");

	do{

		printf("Guess the number \n");
		scanf("%d", &guess);

		if(guess > 100){

			printf("Sorry, Guess the number between 1 to 100 \n");
		}

		 else if(guess > number){

			printf("wrong, guess lower number than the previous one \n");
		} else if(guess < number){

			printf("wrong, Guess higher number than the previous one \n");
		} else{

			printf("correct, you guessed it in %d attempts \n", nguesses);
		}

		nguesses++;
	} while(guess != number);




return 0;

}