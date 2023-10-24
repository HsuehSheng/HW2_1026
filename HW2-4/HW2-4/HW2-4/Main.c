#include <stdio.h>

int main()
{
	int Hours;
	float Rate, Salary;

	do {

		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%d", &Hours);
		if (Hours == -1) break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%f", &Rate);

		if (Hours <= 40) Salary = Hours * Rate;
		else Salary = (Hours - 40) * Rate / 2 + (Hours * Rate);

		printf("Salary is $%.2f\n", Salary);
		printf("\n");

	} while (1);

	return 0;
}