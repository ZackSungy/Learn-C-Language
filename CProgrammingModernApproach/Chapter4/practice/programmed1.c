#include <stdio.h>

int main()
{
	int num;

	printf("Enter a two-digit number:");
	scanf("%d",&num);

	printf("%d%d\n",num%10,num/10);
	return 0;
}
