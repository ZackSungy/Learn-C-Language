#include <stdio.h>

int main()
{
	double x,y=1,div;
	printf("Enter a positive number: ");
	scanf("%lf",&x);

	div=x/y;
	y=(div+y)/2;
	div=x/y;
	for(;y-div>0.00001;y=(div+y)/2,div=x/y);
	printf("Square root: %.5f\n",y);
}
