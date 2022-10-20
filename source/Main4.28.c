
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
		printf("經理人員的薪水是 1000元");
		break;
	case 2://hour worker 一小時50元
		printf("這個月工作幾小時");
		scanf_s("%f", &j);
		if (j < 40)
		{
			printf("時薪工的周薪是 %7.2f", 50 * j);
		}
		else
		{
			printf("時薪工的周薪是 %7.2f", 75 * (j - 40) + 50 * 40);
		}
		break;
	case 3://hire worker
		printf("請輸入當月銷售額");
		scanf_s("%f", &k);
		printf("酬佣金工的周薪是 %7.2f", 250 + (0.057*k));
		break;
	case 4://announce worker oneproduct 20 dollars
		printf("請輸入當月製作件數");
		scanf_s("%f", &l);
		printf("零工的周薪是 %7.2f", (20 * l));
		break;
	default:
		printf("請再重新輸入");
	}

}