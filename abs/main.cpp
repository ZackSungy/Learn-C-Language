#include<stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	if (a < 0)
		a = -a;
	printf("%.2f", a);
	return 0;
}