#include <stdio.h>
#include <math.h>

int main(void)
{
	char op; // operator (+, -, *, %)
	int num1 = 0;
	int num2 = 0;

	int result = 0;

	// i do NOT know why this works now but i will never touch it again

	printf("Enter Number 1: ");
	fflush(stdout);
	scanf("%d", &num1);
	
	printf("Enter Number 2: ");
	fflush(stdout);
	scanf(" %d", &num2);

	printf("Enter operator (+, -, *, %): ");
	fflush(stdout);
	scanf(" %c", &op);

	switch (op)
	{
		case ('+'):
			result = num1 + num2;
			break;
		case ('-'):
			result = num1 - num2;
			break;
		case ('*'):
			result = num1 * num2;
			break;
		case ('%'):
			result = num1 % num2;
			break;
		default:
			printf("Operator is not valid\n");
			break;
	}

	printf("Your result is: %d\n", result);
}

