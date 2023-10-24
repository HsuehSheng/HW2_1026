#include <stdio.h>

int HW2_7_4()
{
	printf("(4)\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}