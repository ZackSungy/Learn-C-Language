#include <stdio.h>

int main()
{
	int a[]={4,9,1,8,[0]=5,7},i;
	printf("%ld\n",sizeof(a)/sizeof(a[0]));
	for(i=0;i<(sizeof(a)/sizeof(a[0]));i++)
		printf("%d\n",a[i]);
	return 0;
}
