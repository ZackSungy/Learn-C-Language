#include<stdio.h>
double min(double x, double y)
{
	return (x < y ? x : y);
}
double min4(double a, double b, double c, double d)
{

	double m;
	m = min(a, b);
	m = min(m, c);
	m = min(m, d);
	return m;
}
int main()
{
	double min4(double, double, double, double);
	double x1, x2, x3, x4, n;
	printf("请输入要比较的四个数:");
	scanf("%lf%lf%lf%lf", &x1, &x2, &x3, &x4);
	n = min4(x1, x2, x3, x4);
	printf("%.2f,%.2f,%.2f,和%.2f的最小值为%.2f", x1, x2, x3, x4, n);
}