#include <stdio.h>

int HW2_7_1()
{
	printf("(1)\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}