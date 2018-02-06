#include <stdio.h>

int main()
{
	int d,n;
	scanf("%d",&n);

	for(d=2;d*d<n;d++)
		if(n%d==0)
			break;

	if(n%d)
		printf("%d is prime\n",n);
	else	
		printf("%d is not prime\n",n);
	return 0;
}
