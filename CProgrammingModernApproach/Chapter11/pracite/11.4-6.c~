#include<stdio.h>

#define N 10

void find_two_largest(int a[], int n, int *largest,int *second_largest);

int main()
{
	int number[N],i,lg,slg;

	printf("input %d numbers:",N);
	for(i=0;i<N;i++){
		scanf("%d",&number[i]);
	}

	find_two_largest(number,N,&lg,&slg);

	printf("The largest is %d.The second largest is %d\n",lg,slg);
	return 0;
} 


void find_two_largest(int a[], int n, int *largest,int *second_largest)
{
	int i;

	if (a[0] > a[1]) {
		*largest = a[0];
		*second_largest = a[1];
	} else {
		*largest = a[1];
		*second_largest = a[0];
	}

	for (i = 2; i < n; i++)
	if (a[i] > *largest) {
		*second_largest = *largest;
		*largest = a[i];
	} else if (a[i] > *second_largest)
		*second_largest = a[i];
}
