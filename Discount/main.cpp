#include<stdio.h>
int main()
{
	float money;
	scanf("%f", &money);
	if (300 <= money)
		money = money*0.85;
	printf("%.2f\n", money);
	return 0;
}