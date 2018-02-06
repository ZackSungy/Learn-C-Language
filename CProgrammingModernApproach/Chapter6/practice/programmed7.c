#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);

	for (int i=1,odd=1,square=1;i<=n;i++,odd+=2,square+=odd)
		printf("%10d%10d\n",i,square);

	return 0;
}
