#include <stdio.h>

int HW2_7_3()
{
	printf("(3)\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (int j = 10; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}