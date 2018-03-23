#include <stdio.h>
#include <time.h>


int main()
{
	int x,n,i,k=1;
	double start,end;
	start=clock();
	printf("Enter power x nad n:");
	scanf("%d%d",&x,&n);
	
	for(i=0;i<n;k*=x,i++);
	printf("The answer is %d\n",k);
	end=clock();

	printf("%lf\n",(end-start)/CLOCKS_PER_SEC);
	return 0;
}
