#include <stdio.h>

int main()
{
	float Salary = 0;
	double Total = 0;


	do {
		printf("Enter sales in dollars (-1 to end) : ");
		scanf_s("%f", &Salary);
		if (Salary == -1) break;
		Total = 200.0 + ( Salary * 0.09 );
		printf("Salary is : %.2lf\n", Total);
		printf("\n");
	} while (1);

	return 0;
}