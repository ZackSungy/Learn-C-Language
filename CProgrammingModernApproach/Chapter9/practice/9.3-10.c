#include <stdio.h>
#include <time.h>
#define N 10


int funA(int a[],int n);
double funB(int a[],int n);
int funC(int a[],int n);


int main()
{
	int a[N],i;
	srand((unsigned) time(NULL));
	
	printf("The array is: ");
	for(i=0;i<N;i++){
		a[i]=rand()%101-50;
		printf("%d ",a[i]);
	}
	printf("\nmax=%d average=%.2lf positive=%d\n",funA(a,N),funB(a,N),funC(a,N));
	return 0;
}

int funA(int a[],int n)
{
	int i,max;
	max=a[0];
	for(i=1;i<n;i++){
		if(max<a[i])
			max=a[i];
	}

	return max;
}

double funB(int a[],int n)
{
	int i,avg=0;

	for(i=0;i<n;i++){
		avg+=a[i];
	}

	return avg/10.0;
}

int funC(int a[],int n)
{
	int i,count=0;

	for(i=0;i<n;i++){
		if(a[i]>=0)
			count++;
	}

	return count;
}
