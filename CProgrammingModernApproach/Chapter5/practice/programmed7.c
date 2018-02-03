#include <stdio.h>

int main()
{
	int a,b,c,d,max,min,max2,min2;

	printf("Enter four integers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);

	if(a>b){max=a;min=b;}
	else {max=b;min=a;}

	if(c>d){max2=c;min2=d;}
	else {max2=d;min2=c;}

	if(max<max2)
		max=max2;
	if(min>min2)
		min=min2;

	printf("Largest:%d\n",min);
	printf("Smallest:%d\n",max);
	return 0;
}
