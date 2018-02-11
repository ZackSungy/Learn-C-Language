#include <stdio.h>

int main()
{
	int num1,denom1,num2,denom2;
	char ch;

	scanf("%d/%d%c%d/%d",&num1,&denom1,&ch,&num2,&denom2);

	switch(ch)
	{
		case '+':
		printf("%d/%d\n",num1*denom2+num2*denom1,denom1*denom2);break;
		case '-':
		printf("%d/%d\n",num1*denom2-num2*denom1,denom1*denom2);break;
		case '*':
		printf("%d/%d\n",num1*num2,denom1*denom2);break;
		case '/':
		printf("%d/%d\n",num1*denom2,denom1*num2);break;
	}
	return 0;
}
