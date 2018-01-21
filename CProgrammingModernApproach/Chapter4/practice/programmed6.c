#include <stdio.h>

int main()
{
	int num,first_sum=0,second_sum=0;
	printf("Enter the first 12 digits of an EAN:");
	
	for (int i=0;i<12;i++)
	{
		scanf("%1d",&num);
		if(i%2==0)
			second_sum+=num;
		else
			first_sum+=num;
	}

	printf("Check digit:%d\n",10-(first_sum*3+second_sum)%10);
	return 0;
}
