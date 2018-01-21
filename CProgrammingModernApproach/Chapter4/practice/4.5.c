#include <stdio.h>

int main()
{
	int i=1,j=2;
	i+=j;
	printf("%d %d\n",i,j);

	i=1,j=2;
	i--;
	printf("%d %d\n",i,j);

	i=1,j=2;
	i*j/i;
	printf("%d %d\n",i,j);

	i=1,j=2;
	i%++j;
	printf("%d %d\n",i,j);

	return 0;
}
