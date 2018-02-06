#include <stdio.h>

int main()
{
	int m,n,t,gcd,m1,n1;

	printf("Enter a fraction(m/n):");
	scanf("%d/%d",&m,&n);

	if(n==0)return 0;

	m1=m>0?m:-m;
	n1=n>0?n:-n;
	while(n1>0)
	{
		t=m1%n1;
		m1=n1;
		n1=t;
	}

	printf("In lowest terms:%d/%d\n",m/m1,n/m1);
	return 0;

}
