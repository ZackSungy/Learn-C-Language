#include <stdio.h>

int digit(int,int);

int main()
{
	int n,digit_of_num;
	printf("Enter a number:");
	scanf("%d",&n);

	printf("Enter digit of the numnber:");
	scanf("%d",&digit_of_num);

	printf("The number %d digit is %d\n",digit_of_num,digit(n,digit_of_num));

	return 0;
}

int digit(int n,int dig)
{
	int i;
	for(i=0;i<dig-1;i++)
		n/=10;

	return n%10;
}
