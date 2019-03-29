#include <stdio.h>
#define N 10

int main()
{
	int n,i,sign=1;
	const int segment[10][7]={    //改一下可以使用for循环
	{1,1,0,1,1,1,1},
	{0,0,0,1,0,0,1},
	{1,0,1,1,1,1,0},
	{1,0,1,1,0,1,1},
	{0,1,1,1,0,0,1},
	{1,1,1,0,0,1,1},
	{1,1,1,0,1,1,1},
	{1,0,0,1,0,0,1},
	{1,1,1,1,1,1,1},
	{1,1,1,1,0,1,1},
	};

	scanf("%d",&n);
	printf(" ");

	for(i=0;i<7;i++){
		if(segment[n][i]&&sign>0)
			printf("_");
		else if(segment[n][i]&&sign<0)
			printf("|");
		else
			printf(" ");
		if(i!=3)
			sign*=-1;
		if(i%3==0)
			printf("\n");

	}
	printf("\n");
	return 0;
}
