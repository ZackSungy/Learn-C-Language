#include<stdio.h>
int main()
{
	int a, i, n = 0;
	scanf("%d", &a);
	for (i = 1; i <= a; i *= 10)
		n++;
	printf("%d", n);
	return 0;
}