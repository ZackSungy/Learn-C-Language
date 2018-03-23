#include <stdio.h>

int num_digit(int);

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	printf("%d\n",num_digit(n));
	return 0;
}

int num_digit(int num)
{
	if(num==0)
		return 1;
	int count=0;
	while(num!=0){
		num/=10;
		count++;
	}
	return count;
}
