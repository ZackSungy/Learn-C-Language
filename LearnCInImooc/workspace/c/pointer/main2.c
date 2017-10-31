#include <stdio.h>

void swap(int a,int b)
{
	int trmp=a;
	a=b;
	b=trmp;
}

int main()
{
	int a=6;
	int b=4;
	swap(a,b);
	printf("num a=%d\nnum b=%d\n",a,b);
	return 0;
}
