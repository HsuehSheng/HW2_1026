#include <stdio.h>

int main()
{
	int Code;

	do {
			printf("Enter code (Manager-1, Hourly workers-2,commissionworkers-3,pieceworkers-4 ) = ");
			scanf_s("%d", &Code);

			double Salary;

			switch (Code)
			{
				case 1:

					printf("Enter Manager fixed weekly salary = ");
					scanf_s("%lf", &Salary);
					printf("Salary = %lf", Salary);
					break;

				case 2:

					double  HourlyWage;
					int HoursWorked;

					printf("Enter hourly worker hourly wage = ");
					scanf_s("%lf", &HourlyWage);
					printf("Enter hourly worker hours worked = ");
					scanf_s("%d", &HoursWorked);

					if (HoursWorked <= 40) Salary = HourlyWage * HoursWorked;
					else Salary = (HourlyWage * 40) + HourlyWage * 1.5 * (HoursWorked - 40);

					break;

				case 3:

					double BasicSalary;
					double WeeklySales;

					printf("Enter commission workers basic salary = ");
					scanf_s("%lf", &BasicSalary);
					printf("Enter commission workers weekly sales = ");
					scanf_s("%lf", &WeeklySales);

					Salary = BasicSalary + (0.057 * WeeklySales);

					break;

				case 4:

					double PieceSalary;
					double WeeklyProducts;

					printf("Enter pieceworkers basic salary = ");
					scanf_s("%lf", &PieceSalary);
					printf("Enter pieceworkers weekly sales = ");
					scanf_s("%lf", &WeeklyProducts);

					Salary = PieceSalary * PieceSalary;

					break;

				default:

					printf("error");
			}
			printf("Salary = %.2lf\n",Salary);

	} while (1);
	
	

	return 0;
}