#include <stdio.h>

double inner_produce(double a[],double b[],int n);

int main()
{
	int n,i;
	printf("Enter size:");
	scanf("%d",&n);
	double a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%lf",&a[i]);
	}
	for(i=0;i<n;i++){
		scanf("%lf",&b[i]);
	}

	printf("The result is %lf\n",inner_produce(a,b,n));
	return 0;
}

double inner_produce(double a[],double b[],int n)
{
	int sum=0,i;
	for(i=0;i<n;i++){
		sum+=a[i]*b[i];
	}

	return sum;
}
