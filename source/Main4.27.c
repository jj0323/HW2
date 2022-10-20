#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j, k;
	for (i = 1; i <= 500; i++)
	{
		for (j = 1; j <= i; j++)
		{
			for (k = 1; k <= 500; k++)
			{
				if (i*i + j*j == k * k)
				{
					printf("%3d %3d %3d", j, i, k);
					printf("\n");
				}
			}

		}
	}
	return 0;
}