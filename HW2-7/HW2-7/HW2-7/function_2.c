#include <stdio.h>

int HW2_7_2()
{
	printf("(2)\n");

	for (int i = 10; i > 0; i--)
	{
		for (int j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}