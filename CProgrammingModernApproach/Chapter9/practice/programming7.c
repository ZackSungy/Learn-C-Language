#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int power(int x,int n)
{
	if(n==0)
		return 1;
	if(n==1)
		return x;
	return n%2?x*power(x,n-1):power(x,n/2)*power(x,n/2);
}

int main()
{
	int x,n;
	double start,end;
	start=clock();
	printf("Enter power x nad n:");
	scanf("%d%d",&x,&n);
	printf("The answer is %d\n",power(x,n));
	end=clock();

	printf("%lf\n",(end-start)/CLOCKS_PER_SEC);
	return 0;
}
