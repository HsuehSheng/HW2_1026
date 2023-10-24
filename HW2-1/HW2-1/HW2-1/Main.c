#include <stdio.h>

int main()
{
	int AccountNumber;
	float BeginningBalance, TotalCharges, TotalCredits, CreditLimit;
	double NewBalance;
	
	do{

		printf("Enter account number (-1 to end ): ");
		scanf_s("%d", &AccountNumber);
		if (AccountNumber == -1) break;
		printf("Enter beginning balance: ");
		scanf_s("%f", &BeginningBalance);
		printf("Enter total charges: ");
		scanf_s("%f", &TotalCharges);
		printf("Enter total credits: ");
		scanf_s("%f", &TotalCredits);
		printf("Enter credit limit: ");
		scanf_s("%f", &CreditLimit);
		NewBalance = ((BeginningBalance + TotalCredits) * 100 + 0.5) / 100.0;
	
		if (NewBalance > CreditLimit)
		{
			printf("Account:         %d\n", AccountNumber);
			printf("Credit limit:    %0.2f\n", CreditLimit);
			printf("Balance:         %.2lf\n",  NewBalance);
			printf("Credit Limit Exceeded.\n");
			
		}
        printf("\n");
	} while (1);
	return 0;
}