#include <stdio.h>
#define N 10
#define size(x) (int)(sizeof(x)/sizeof(x[0]))

int main()
{
	int a[N],i;

	printf("Enter %d numbers: ",N);
	for(i=0;i<size(a);i++)
	{
		scanf("%d",&a[i]);
	}

	printf("In reverse order: ");
	for(i=size(a)-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}
