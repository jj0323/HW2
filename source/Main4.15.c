#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a;
	float b, c;
	c = 5000;
	b = 1.095;
	for (a = 1; a < 16; a++)
	{
		b = b + 0.005;
		c = c * b;
		printf("The %2d year = %5.f\n", a, c);
	}
	
	return 0;
}