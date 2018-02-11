#include <stdio.h>

int main()
{
	short i;

	printf("This squares test for \"short\" \n");

	for(i = 1;; i++)
	{
		if((short)(i*i)<0)
			break;
	}

	printf("The fail position is %d\n",i);
	return 0;
}
