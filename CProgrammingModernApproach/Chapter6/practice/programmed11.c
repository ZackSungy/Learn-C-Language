#include <stdio.h>

int main()
{
	int n;
	float e=1.00f,s=1.00f,count=2.00f;
	printf("Enter a number:");
	scanf("%d",&n);

	for(int i=0;i<n;i++,s*=count,count+=1.0f)
		e+=1.0f/s;

	printf("e is %f\n",e);
	return 0;
}
