#include <stdio.h>

int main()
{
	int num;

	printf("Enter a number:");

	scanf("%d",&num);
	
	if(num<0 && num > 999)
		printf("Input error\n");
	else if(num<10)
		printf("The number %d has 1 digits\n",num);
	else if(num<100)
		printf("The number %d has 2 digits\n",num);
	else
		printf("The number %d has 3 digits\n",num);

	return 0;
}
