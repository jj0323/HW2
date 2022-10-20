#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	float a, b, c;
	int d;
	printf("Enter loan principal(-1 to end)¡G");
	scanf_s("%f", &a);
	if (a != -1)
	{
		printf("Enter interest rate¡G");
		scanf_s("%f", &b);
		printf("Enter term of the loan in days¡G");
		scanf_s("%d", &d);
		c = a * b*d / 365;
		printf("The interest charge is $%.2f", c);
	}
	return 0;
}