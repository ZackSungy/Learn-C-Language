#include<stdio.h>
int main()
{
	double a, b;
	int c;
	do
	{
		scanf("%lf%lf%d", &a, &b, &c);
	} while (a > 100000 && b > 100000 && c > 100);
	printf("%.*lf\n", c, a / b);
	return 0;
}