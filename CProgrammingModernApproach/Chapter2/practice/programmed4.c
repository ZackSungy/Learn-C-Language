#include <stdio.h>

int main()
{
	float money;

	printf("Enter an amount:");
	scanf("%f",&money);
	
	printf("With tax added:$%f\n",money*1.05);

	return 0;
}
