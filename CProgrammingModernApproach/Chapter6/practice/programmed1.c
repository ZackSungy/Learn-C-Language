#include <stdio.h>

int main()
{
	float num,max=0;

	do{
		printf("Enter a number:");
		scanf("%f",&num);
		if(max<num)
			max=num;
	}while(num>0);
	printf("The largest number entered was %.2f\n",max);
	return 0;
}
