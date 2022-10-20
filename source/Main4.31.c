#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int i, j, k, l;
	for (i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (j = 4; j > i; j--)
			{
				printf(" ");
			}
			for (j = 0; j < 2*i + 1; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for (j = 0; j < i - 4; j++)
			{
				printf(" ");
			}
			for (j = 17 - 2*i; j > 0; j--)
			{
				printf("*");

			}
			printf("\n");
		}
	}
	return 0;
}