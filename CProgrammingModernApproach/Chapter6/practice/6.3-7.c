#include <stdio.h>

int main()
{
	int i=9384;
	for(;i>0;i/=10)
		printf("%d ",i);
	printf("\n");
	return 0;
}
