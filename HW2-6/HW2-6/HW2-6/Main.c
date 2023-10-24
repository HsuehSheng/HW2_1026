
/**/
#include <stdio.h>
#include <math.h>

int main()
{

	double Investment = 5000, InvestmentValue;
	int Years = 15;
	double Rates[] = { 10.0, 10.5, 11.0, 11.5, 12.0 };
	int NumRates = sizeof(Rates) / sizeof(Rates[0]);
	int year;

	for (int i = 0; i < NumRates; i++)
	{
		InvestmentValue = Investment;
		for (year = 0; year < Years; year++)
		{
			InvestmentValue += InvestmentValue * Rates[i] / 100;

		}
		printf("rate = %.1lf%%, investment = $%.2f, %d years later\n",
			Rates[i], InvestmentValue, Years);
	}
	return 0;
}

/*

#include<stdio.h>
#include <math.h>

int main()
{
	double principal = 5000;
	int years = 15;
	double rate , compoundInterest;
	for (rate = 0.10; rate <= 0.125; rate += 0.005)
	{
		//compoundInterest = principal * pow(1.0 + rate, years);
		//printf("Compound Interest is %.2lf\n", compoundInterest);
		printf("%lf\n", rate);
	}
	return 0;
}
*/