#include<stdio.h>
int main()
{
	float a;
	do
	{
		printf("输入分数：\n");
		scanf("%f", &a);
	} while (0 > a || 100 < a);
	if (90 <= a)
		printf("你的等级为：A");
	else
		(a < 60 ? printf("你的等级为：C") : printf("你的等级为：B"));
	return 0;
}