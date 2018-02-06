#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	if(n<0)
		return 0;
	printf("The reversal:");
	do{
		printf("%d",n%10);
		n/=10;
	}while(n>0);

	printf("\n");
	return 0;
}
