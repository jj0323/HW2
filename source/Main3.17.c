#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b;
	float c;
	float d;
	float e;
	float new_blance;
	printf("Enter account number(-1 to ecd)¡G");
	scanf_s("%d", &a);
	if (a !=-1)
	{
		printf("Enter beginning balance¡G");
		scanf_s("%f", &b);
		printf("Enter total charge¡G");
		scanf_s("%f", &c);
		printf("Enter total credits¡G");
		scanf_s("%f", &d);
		printf("Enter credits limit¡G");
		scanf_s("%f", &e);
		
		new_blance = b + c - d;
		if (new_blance > b)
		{
			printf("Account¡G%d\n", a);
			printf("Credits limit¡G%.2f\n", e);
			printf("Blance¡G%.2f\n", new_blance);
			printf("Credits Limit Exceeded.\n");
		}
	}
	return 0;
}