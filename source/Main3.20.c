#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	float b, c;
	printf("Enter # of hours worked(-1 to end)¡G");
	scanf_s("%d", &a);
	
	if (a != -1)
	{
		if (a <= 40)
		{
			printf("Enter hourly rate of the worker($00.00)¡G");
			scanf_s("%f", &b);
			c = a * b;
			printf("Salary is $%.2f", c);
		}
		else
		{
			printf("Enter hourly rate of the worker($00.00)¡G");
			scanf_s("%f", &b);
			c = 400 + (a - 40)*b*1.5;
			printf("Salary is $%.2f", c);
		}

	}
	return 0;
}