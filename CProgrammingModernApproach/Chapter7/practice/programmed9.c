#include <stdio.h>
#include <ctype.h>
int main()
{
	int clock,min;
	char ch;
	
	printf("Enter a 12-hour time: ");
	scanf("%d : %d %c",&clock,&min,&ch);
	if(toupper(ch)=='P')
		clock+=12;
	
	if(clock > 24 || clock < 0 || 	min >59 || min < 0)
	{
		printf("Input error\n");
		return -1;
	}

	printf("Equivalent 24-hour time: %d:%d\n",clock==24?0:clock,min);
	return 0;
}
