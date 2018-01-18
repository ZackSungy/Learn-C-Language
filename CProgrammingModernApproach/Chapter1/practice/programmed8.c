#include <stdio.h>

int main()
{
	float amount,rate,payment,month_rate;
	char num[3][6]={"first","second","third"};

	printf("Enter amount of loan:");
	scanf("%f",&amount);
	printf("Enter interest rate:");
	scanf("%f",&rate);
	printf("Enter monthly payment:");
	scanf("%f",&payment);


	month_rate=(rate/100.0f)/12.0f;
	for (int i=0;i<3;i++)
	{
		amount=amount*(1.0f+month_rate);
		printf("Balance remaining after ");
		printf("%s",num[i]);
		printf(" payment: $%.2f\n",amount-=payment);
	}

	return 0;
}
