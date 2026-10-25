#include <stdio.h>
#include <stdlib.h>

// might update this later right now there isnt any balance control whatsoever

int main(void)
{
	int balance = 100; // start with 100$
	int option = {};


	while (true)	// infinite loop
	{
		printf("\n==== ATM ====\n");
		printf("1. Show Balance\n");
		printf("2. Withdraw Money\n");
		printf("3. Deposit Money\n");
		printf("Enter Option: ");
		scanf("%d", &option);

		if (option == 1)
			printf("\nBalance: %d", balance);

		if (option == 2)
		{
			float withdrawAmount = {};
			printf("\nEnter Amount to be withdrawn: ");
			scanf("%f", &withdrawAmount);

			balance -= withdrawAmount;
		}

		if (option == 3)
		{
			float depositAmount = {};

			printf("\nEnter amount of money to be deposited: ");
			scanf("%f", &depositAmount);

			balance += depositAmount;
		}
	}
}
