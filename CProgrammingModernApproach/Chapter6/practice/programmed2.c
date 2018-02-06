#include <stdio.h>

int main()
{
	int n,m,t;

	printf("Enter twwo integers: ");
	scanf("%d %d",&n,&m);

	if(m<=0|| n<=0)return 0;	

	while(m>0)
	{
		t=n%m;
		n=m;
		m=t;
	}

	printf("Greatest common dibisor: %d\n",n);
	return 0;
}
