#include <stdio.h>

int main()
{
	long i;

	printf("This squares test for \"long\" \n");

	for(i = 1;; i++)
	{
		if((long)(i*i)<0)
			break;

		printf("%ld\n",i*i);
	}

	printf("The fail position is %ld\n",i);
	return 0;
}
