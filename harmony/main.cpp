#include<stdio.h>
int main()
{
	float sum = 0, m, i, n;
	scanf("%f", &n);
	for (i = 1; i <= n; i++)
	{
		m = 1 / i;
		sum = sum + m;
	}
	printf("%.3f", sum);
	return 0;
}