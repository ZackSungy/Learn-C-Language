#include <stdio.h>

int main()
{
	int score;
	printf("Enter a two-digit number:");
	scanf("%d",&score);

	if(score<0 || score>100)
	{
		printf("Input error\n");
		return 0;
	}

	switch(score/10)
	{
		case 10: case 9:
		printf("Letter grade: A\n");break;
		case 8:	
		printf("Letter grade: B\n");break;
		case 7:
		printf("Letter grade: C\n");break;
		case 6:
		printf("Letter grade: D\n");break;
		default:
		printf("Letter grade: F\n");break;
	}
	return 0;
}
