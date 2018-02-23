#include <stdio.h>

typedef int Bool;

int main()
{
	int i;
	Bool weekend[7]={1,0,0,0,0,0,1};
	for(i=0;i<7;i++)
	{
		printf("%d ",weekend[i]);
	}
	printf("\n");
	return 0;
}
