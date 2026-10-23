#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <string.h>

int main(void)
{

	srand(time(NULL));

	unsigned int computer = 0; // unsigned because unsigned <= 0
	unsigned int human = 0;

	// in this implementation 
	// rock = 1
	// paper = 2
	// scissor = 3

	char choice[1024]; // bit much?

	printf("Enter Rock, Paper Scissor (Case Sensitive): ");
	scanf("%1023s", choice);

	if (strcmp(choice, "Rock") == 0)
	{
		human = 1;
	}

	if (strcmp(choice, "Paper") == 0)
	{
		human = 2;
	}

	if (strcmp(choice, "Scissor") == 0)
	{
		human = 3;
	}

	computer = (unsigned int)(rand() % 3 + 1);

	if (computer == 1 && human == 1)
	{
		printf("Both chose Rock. It is a tie\n");
		return 0;
	}

	if (computer == 2 && human == 2)
	{
		printf("Both chose Paper. It is a tie\n");
	}

	if (computer == 3 && human == 3)
	{
		printf("Both chose scissor. It is a tie\n");
	}

	if (computer == 1 && human == 2)
	{
		printf("Rock vs Paper. Human Wins\n");
	}

	if (computer == 2 && human == 3)
	{
	    printf("Paper vs Scissor. Human Wins\n");
	}

	if (computer == 3 && human == 2)
	{
	    printf("Scissor vs Paper. Computer Wins\n");
	}

	if (computer == 1 && human == 3)
	{
		printf("Rock vs Scissor. Computer Wins\n");
	}

	if (computer == 2 && human == 1)
	{
		printf("Paper vs Rock. Computer Wins\n");
	}

	if (computer == 3 && human == 1)
	{
		printf("Scissor vs Rock. Human Wins\n");
	}



}
