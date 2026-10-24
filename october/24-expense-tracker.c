#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int cancel = 1; // if this switches to 0, programm prints trotal and exits
	float total = 0;

	while (cancel != 0)
	{
		float value = 1;

		printf("Enter Expense: ");
		scanf("%f", &value);
		
		if (value == 0)
			cancel = 0;

		total += value;

				
	}

	printf("Total: %.2f\n", total);
}
