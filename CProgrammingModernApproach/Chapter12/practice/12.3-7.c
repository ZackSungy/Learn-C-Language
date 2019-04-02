#include <stdio.h>
#include <stdbool.h>

#define N 5

bool search(const int a[],int n,int key);

int main()
{
	const int a[]={1,3,5,7,9};

	printf("9 is%s in the array\n",search(a,N,9)?"":" not");
	printf("8 is%s in the array\n",search(a,N,8)?"":" not");

	return 0;
}

bool search(const int a[],int n,int key)
{
	int const *p=a;

	while(p<a+n){
		if(*p==key)
			return true;
		p++;
	}

	return false;
}
