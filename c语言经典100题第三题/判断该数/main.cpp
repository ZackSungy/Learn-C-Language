#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int i;
	double n, x, a;
	printf("������һ��������");
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
					printf("����Ϊ%lf", x);
					exit(0);
				}
			}
		}
	}
	printf("����������Ҫ������");
	return 0;
}

