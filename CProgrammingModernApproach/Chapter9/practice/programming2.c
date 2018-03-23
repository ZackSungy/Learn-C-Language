#include <stdio.h>


void tax(float);

int main()
{
	float income;
	
	printf("Enter income: $");
	scanf("%f",&income);
	tax(income);
	return 0;
}

void tax(float income)
{

	if(income<0.0f)
		printf("Input error\n");
	else if(income<750.0f)
		printf("The tax is %.2f\n",income*.01);
	else if(income<2250.0f)
		printf("The tax is %.2f\n",7.50f+(income-750)*.02);
	else if(income<3750.0f)
		printf("The tax is %.2f\n",37.50f+(income-2250)*.03);
	else if(income<5250.0f)
		printf("The tax is %.2f\n",82.50f+(income-3750)*.04);
	else if(income<7000.0f)
		printf("The tax is %.2f\n",142.50f+(income-5250)*.05);
	else
		printf("The tax is %.2f\n",230.00f+(income-7000)*.06);
}
