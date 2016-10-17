#include<stdio.h>
int main()
{
	double n, m, sum = 0;
	scanf("%lf%lf", &n, &m);
	for (n = n; n <= m; n++)
	{
		sum = sum + 1 / (n*n);
	}
	printf("%.5lf\n", sum);
	return 0;
}