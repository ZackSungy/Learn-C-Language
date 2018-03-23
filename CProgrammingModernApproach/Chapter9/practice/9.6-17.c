#include <stdio.h>

int gcd(int,int);

int main()
{
	int n,m;
	printf("Enter two number:");
	scanf("%d%d",&n,&m);
	printf("The answer is %d\n",gcd(n,m));
	return 0;
}

int gcd(int n,int m)
{
	return m?gcd(m,n%m):n;
}
