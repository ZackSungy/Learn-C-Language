
#include<stdio.h>
long f(int n)
{
	if (n == 0 || n == 1)
		return 1;
	else
		return n*f(n - 1);
}
int main()
{
	int n;
	long y;
	do{
		printf("请输入大于等于零的数：");
		scanf("%d", &n);
	} while (n < 0);
	y = f(n);
	printf("%d!=%ld", n, y);
	return 0;
}
