
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	float j, k, l;
	scanf_s("%d", &i);
	switch (i)
	{
	case 1://the salary for the manager is 1000 dollars per week
		printf("�g�z�H�����~���O 1000��");
		break;
	case 2://hour worker �@�p��50��
		printf("�o�Ӥ�u�@�X�p��");
		scanf_s("%f", &j);
		if (j < 40)
		{
			printf("���~�u���P�~�O %7.2f", 50 * j);
		}
		else
		{
			printf("���~�u���P�~�O %7.2f", 75 * (j - 40) + 50 * 40);
		}
		break;
	case 3://hire worker
		printf("�п�J���P���B");
		scanf_s("%f", &k);
		printf("�S�����u���P�~�O %7.2f", 250 + (0.057*k));
		break;
	case 4://announce worker oneproduct 20 dollars
		printf("�п�J���s�@���");
		scanf_s("%f", &l);
		printf("�s�u���P�~�O %7.2f", (20 * l));
		break;
	default:
		printf("�ЦA���s��J");
	}

}