#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));

	int guesses = 0;
	int number = 0;
	int guessed_number = 0;

 	number = rand() % 100 + 1;

	while (guessed_number != number)
	{
		printf("Enter a number between 1-100: ");
		scanf("%d", &guessed_number);
			
		if (guessed_number < number)
			printf("Too small!\n");

		if (guessed_number > number)
			printf("Too High!\n");

		if (guessed_number < 0 || guessed_number > 100)
			printf("Number is not between 1-100\n");

		guesses++;
	}

	printf("You got the number! The number was %d. It took you %d tries to figure it out!\n", number, guesses);

}
