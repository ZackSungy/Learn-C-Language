#include <stdio.h>
#define N 5

int *find_largest(int a[],int n);

int main()
{
	int number[N],i;

	printf("Enter %d numbers:",N);
	for(i=0;i<N;i++)
		scanf("%d",&number[i]);

	printf("The largest number is:%d\n",*find_largest(number,N));
	return 0;
}

int *find_largest(int a[],int n)
{
	int i,j=0;

	for(i=1;i<N;i++){
		if(a[i]>a[j])
			j=i;
	}

	return &a[j];
}
