#include <stdio.h>

int main()
{
	int length, breadth;
	char sign = '+';

	printf("Enter length : ");
	scanf_s("%d", &length);
	printf("Enter breadth : ");
	scanf_s("%d", &breadth);

	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < breadth; j++)
		{
			if ((i == 0) || (i == length - 1) ||
				(j == 0) || (j == breadth - 1))
				printf("%c", sign);
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}