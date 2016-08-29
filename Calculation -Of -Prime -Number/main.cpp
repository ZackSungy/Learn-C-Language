#include<stdio.h>
int a(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else
		return a(n - 1) + a(n - 2);
}
int main()
{
	int num;
	int result;
	do{
		printf("请输入项数：");
		scanf("%d", &num);
	} while (num < 1);
	result = a(num);
	printf("第%d项为%d", num, result);
	return 0;
}