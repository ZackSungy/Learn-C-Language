#include <stdio.h>

int main()
{
	int y,m,d;
	scanf("%d/%d/%d",&m,&d,&y);

	printf("You entered the date %04d%02d%02d\n",y,m,d);
	return 0;
}
