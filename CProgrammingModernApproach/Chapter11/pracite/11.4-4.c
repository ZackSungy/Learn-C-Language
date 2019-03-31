#include<stdio.h>

void swap(int *p,int *q);

int main(void)
{
	int i,j;
	scanf("%d%d",&i,&j);

	printf("before swap:i=%d j=%d\n",i,j);
	swap(&i,&j);
	printf("after swap:i=%d j=%d\n",i,j);
	return 0;
}

void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
