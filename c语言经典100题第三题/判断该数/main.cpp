#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i;
	double n, x, a;
	printf("请输入一个整数：");
	scanf("%lf", &n);
	x = n;
	n = n + 100;
	for (i = 1; i < n; i++)
	{
		a = sqrt(n);
		if (a == i)
		{
			n = n + 168;
			for (i = 1; i < n; i++)
			{
				a = sqrt(n);
				if (a == i)
				{
					printf("该数为%lf", x);
					exit(0);
				}
			}
		}
	}
	printf("该数不是需要的数！");
	return 0;
}

