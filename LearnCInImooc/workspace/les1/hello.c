#include<stdio.h>
#include "max.h"
#include "min.h"


int main()
{
	int a=100;
	int b=20;
	int c=max(a,b);
	int d=min(a,b);
	printf("the max value is %d\n",c);
	printf("the min value is %d\n",d);
	return 0;
}
