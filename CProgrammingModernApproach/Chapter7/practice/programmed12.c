#include <stdio.h>

int main()
{
	double num1,num2;
	char ch;
	printf("Enter an expression: ");
	scanf("%lf",&num1);
	while((ch=getchar())!='\n')
	{
		scanf("%lf",&num2);
		switch(ch)
		{
			case '+':num1+=num2;break;
			case '-':num1-=num2;break;
			case '/':
			if(num2==0)
			{
				printf("Divisor is zore, fail!\n");
				return -1;
			}
			num1/=num2;break;
			case '*':
			num1*=num2;break;
		}
	}

	printf("Value of expression:%g\n",num1);
}
