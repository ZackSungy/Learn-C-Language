#include<stdio.h>
void fun(int x, int r)
{
	if (x / r != 0)
	{
		fun(x / r, r);
		printf("%d", x%r);
	}
	else
		printf("%d", x%r);
}
int main()
{
	int x;
	printf("请输入一个整数：");
	scanf("%d", &x);
	fun(x, 2);
	printf("\n");
	return 0;
}