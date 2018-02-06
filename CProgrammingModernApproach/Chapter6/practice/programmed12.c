#include <stdio.h>

int main()
{
	float e=1.00f,s=1.00f,count=2.00f,min;
	printf("Enter a min float:");
	scanf("%f",&min);

	for(int i=0;1.0f/s>min;i++,s*=count,count+=1.0f)
		e+=1.0f/s;

	printf("e is %f\n",e);
	return 0;
}
