#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("Enter ISBN:");
	scanf("%d-%d-%d-%d-%d",&a,&b,&c,&d,&e);
	
	printf("GB1 perfix:%d\n",a);
	printf("Group identifier:%d\n",b);
	printf("Publisher code:%d\n",c);
	printf("Item number:%d\n",d);
	printf("Check digit:%d\n",e);

	return 0;
}
