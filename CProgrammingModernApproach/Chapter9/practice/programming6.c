#include <stdio.h>

int answer(int num);

int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("The answer is %d\n",answer(x));
	return 0;	
}

int answer(int x)
{
	return ((((3*x+2)*x-5)*x-1)*x+7)-6;
}
