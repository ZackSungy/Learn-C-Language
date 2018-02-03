#include <stdio.h>

int main()
{
	int clock,min;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&clock,&min);

	if(clock > 24 || clock < 0 || 	min >59 || min < 0)
		printf("Input error\n");
	else
		printf("Equivalent 12-hour time: %d:%02d %cM\n",clock>12 ? clock  - 12 == 12 ? 0 : clock - 12 : clock,min,clock>12?'P':'A');
	
	return 0; 
}
