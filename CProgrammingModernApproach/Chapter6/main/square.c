#include <stdio.h>

int main()
{
	int n,i=1;
	printf("This program prints a table of squares.\nEnter number of entries  in table: ");
	scanf("%d",&n);

	while(i<=n)
	{
		printf("%10d%10d\n",i,i*i);
		i++;
	}
	return 0;
}
