#include <stdio.h>

int main()
{
	int height=3,x=0;
	for(int i=0;i<height;i++)
	{	
		for(int j=height*3-2-i;j>0;j--)
			printf(" ");
		printf("*\n");
	}
	for(int i=height-1;i>=0;i--)
	{
		for(int k=0;k<x;k++)
			printf(" ");
		if(i!=0)
			printf("*");
		for(int j=2*i-1;j>0;j--)
			printf(" ");
		printf("*\n");
		x++;
	} 
	return 0;
}
