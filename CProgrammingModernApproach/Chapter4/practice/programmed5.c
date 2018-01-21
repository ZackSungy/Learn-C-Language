#include <stdio.h>

int main()
{
	int sum_first=0,sum_second=0,num;
	printf("Enter the first 11 figits of a UPC:");

	for (int i=0;i<11;i++)
	{
		scanf("%1d",&num);
		if(i%2==0)
			sum_first+=num;
		else
			sum_second+=num;
	}

	printf("Check digit:%d\n",10-(sum_first*3+sum_second)%10);
	return 0;
}
