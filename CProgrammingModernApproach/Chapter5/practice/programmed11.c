#include <stdio.h>

int main()
{
	int num;
//	char fitst[9][]={"one","two","three","four","five","six","seven","egiht","nine"};
//	char two[8][]={"Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

	printf("Enter a two-digit number:");
	scanf("%d",&num);

	if(10>num || num>99)
	{
		printf("Input error\n");
		return 0;
	}

	if(num/10==1)
	{
		
		switch(num%10)
		{
			case 1:printf("You entered the numver eleven");break;
			case 2:printf("You entered the number twelve");break;
			case 3:printf("You entered the number thirteen");break;
			case 4:printf("You entered the number fourteen");break;
			case 5:printf("You entered the number fifteen");break;
			case 6:printf("You entered the number sixteen");break;
			case 7:printf("You entered the number seventeen");break;
			case 8:printf("You entered the number eighteen");break;
			case 9:printf("You entered the number nineteen");break;
		}
		return 0;
	}
	
	switch(num/10)
	{
		case 2:printf("You entered the number twenty");break;
		case 3:printf("You entered the number thirty");break;
		case 4:printf("You entered the number forty");break;
		case 5:printf("You entered the number fifty");break;
		case 6:printf("You entered the number sixty");break;
		case 7:printf("You entered the number seventy");break;
		case 8:printf("You entered the number eighty");break;
		case 9:printf("You entered the number ninety");break;
	}
	
	switch(num%10)
	{
		case 0:printf("\n");break;
		case 1:printf("-one\n");break;
		case 2:printf("-two\n");break;
		case 3:printf("-three\n");break;
		case 4:printf("-four\n");break;
		case 5:printf("-five\n");break;
		case 6:printf("-six\n");break;
		case 7:printf("-seven\n");break;
		case 8:printf("-eight\n");break;
		case 9:printf("-nine\n");break;
	}
	return 0;
}
