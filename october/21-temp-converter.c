#include <stdlib.h>
#include <stdio.h>

// no helper function today yall

int main(void)
{
	float temp_in_f = {}; // temp in fahrenheit 
	float temp_in_c = {}; // temp in Celcious
	
	int option = 0;

	printf("----- Temp Converter -----\n");
	printf("1. Convert Fahrenheit to Celsius\n");
	printf("2. Convert Celsius to Fahrenheit\n");

	printf("Enter Option: ");
	scanf(" %d", &option);

	
		if (option == 1)
		{
			printf("Enter Fahrenheit: ");
			scanf(" %f", &temp_in_f);
			fflush(stdout);
			float celsius_conv = (temp_in_f - 32) * 5.0 / 9.0;
			temp_in_f = celsius_conv;
			printf("Temperatur in Celsius: %.2f\n", temp_in_f);
			return 0;
		}

		if (option == 2)
		{	printf("Enter Celsius: ");
			scanf(" %f", &temp_in_c);
			fflush(stdout);
			float fahrenheit_conv = (temp_in_c * 9 / 5 + 32);
			temp_in_c = fahrenheit_conv;
			printf("Temperature in Fahrenheit: %.2f\n", temp_in_c);
			return 0;
		}
	
}	
