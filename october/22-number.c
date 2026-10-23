#include <stdio.h>

int main(void)
{
	int number = 0;

	printf("Enter a number that either negative or positive: ");
	scanf("%d", &number);

	if (number < 0)
	{
		printf("Number is negative\n");
		return 0;
	}

	if (number == 0)
	{
		printf("Number is 0\n");
		return 0;
	}

	if (number > 0)
	{
		printf("Number is positive\n");
		return 0;
	}
}
