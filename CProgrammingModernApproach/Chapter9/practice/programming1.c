#include<stdio.h>

void selection_sort();

int main()
{
	int n,i;
	printf("Enter the array size:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	selection_sort(a,n-1);

	printf("The number from small to big is:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}

	printf("\n");
	return 0;
}

void selection_sort(int a[],int n)
{
	if(n<1)return;
	int max=a[n],i=n-1,sign=n;
	for(i;i>=0;i--){
		if(max<a[i]){
			max=a[i];
			sign=i;
		}
	}
	if(sign!=n){
		a[sign]=a[n];
		a[n]=max;
	}
	selection_sort(a,n-1);
}
