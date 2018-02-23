#include <stdio.h>
#include <stdbool.h>
int main()
{
	bool weekend[7]={true,[6]=true};
	for(int i=0;i<7;i++)
	{
		printf("%d",weekend[i]);
	}
	return 0;
}
