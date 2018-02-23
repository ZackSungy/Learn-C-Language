#include <stdio.h>
#define N 40

int main()
{
	int Fibonacci[N]={0,1},i;
	
	printf("The first 40 Fibonacci is: ");
	for(i=0;i<N-2;i++)
		Fibonacci[i+2]=Fibonacci[i]+Fibonacci[i+1];
	
	for(i=0;i<N;i++)
		printf("%d ",Fibonacci[i]);
	printf("\n");
	return 0;
}
