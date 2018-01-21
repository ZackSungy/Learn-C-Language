#include <stdio.h>

int main()
{
	int num;

	printf("Enter a thire-digit number:");
	scanf("%d",&num);

	printf("%d%d%d\n",num%10,num/10%10,num/100);
	return 0;
}
