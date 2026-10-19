#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL)); 		// Generate a random seed with time

	int guesses = 0;	        // amount of guesses
	int number = 0;
	int guessed_number = 0; 	// the value of guessed number
	
 	number = rand() % 100 + 1;   	// Generate a random Number between 1-100

	while (guessed_number != number) // check if the user entered the correct number. if not, continue guessing, if yes jump to printf
	{
		printf("Enter a number between 1-100: ");
		scanf("%d", &guessed_number); // assign the entered number to guessed_number
			
		if (guessed_number < number)
			printf("Too small!\n"); 

		if (guessed_number > number)
			printf("Too High!\n");

		if (guessed_number < 0 || guessed_number > 100)
			printf("Number is not between 1-100\n");

		guesses++; // count up guessed by guessed += 1 for every try. because this will count up infinitely until the while loop ended
			   // which implies guessed_number = number
	}

	printf("You got the number! The number was %d. It took you %d tries to figure it out!\n", number, guesses);

}
