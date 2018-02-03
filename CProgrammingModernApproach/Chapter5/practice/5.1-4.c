#include <stdio.h>

int main()
{
	int i,j;
	
	printf("Enter i and j: ");
	scanf("%d%d",&i,&j);

	printf("%d\n",(i>=j)+(i==j)==2?0:(i>=j)+(i==j)?1:-1);
	return 0;
}
