#include<stdio.h>

#define N 5

double inner_produce(const double *a,const double *b,int n);

int main()
{
	const double a[]={10.2,2.3,4,7,1},b[]={4,6,0,2.8,9.3};
	double const *p=a,*q=b;

	for(;p<a+N;p++,q++){
		printf("%.2lf*%.2lf+",*p,*q);
	}
	printf("\b");

	printf("=%.2lf\n",inner_produce(a,b,N));
}

double inner_produce(const double *a,const double *b,int n)
{
	double const *p=a,*q=b;
	double sum=0; 

	while(p<a+n){
		sum+=*p**q;
		p++;
		q++;
	}

	return sum;
}
