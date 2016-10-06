#include<stdio.h>
int main()
{
	int a[3], i, j, x;
	printf("输入x，y，z的值：");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3 - 1 - j; i++)
		if (a[i]>a[i + 1])
		{
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	printf("由小到大输出：");
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}