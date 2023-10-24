#include <stdio.h>

int main()
{
	float LoanPrincipal = 0, InterestRate, TTLID = 0;
	double InterestCharge  = 0;

	do {

		printf("Enter loan principal (-1 to end): ");
		scanf_s("%f",&LoanPrincipal);
		if (LoanPrincipal == -1) break;
		printf("Enter interest rate: ");
		scanf_s("%f",&InterestRate);
		printf("Enter term of the loan in days: ");
		scanf_s("%f",&TTLID);

		InterestCharge = LoanPrincipal * InterestRate * TTLID / 365;
		InterestCharge = ((InterestCharge * 100) + 0.5) / 100.0;
		printf("The interest charge is $%.2lf\n",InterestCharge);
		printf("\n");
	} while (1);
	

	return 0;
}