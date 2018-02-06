#include <stdio.h>

int main()
{
	float amount,rate,payment,month_rate;
	int times;

	printf("Enter amount of loan:");
	scanf("%f",&amount);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);
	printf("Enter the times:");
	scanf("%d",&times);

	month_rate=(rate/100.0f)/12.0f;
	for (int i=0;i<times;i++)
	{
		amount=amount*(1.0f+month_rate);
		printf("Balance remaining after ");
		printf("%d times",i+1);
		printf(" payment: $%.2f\n",amount-=payment);
	}

	return 0;
}
