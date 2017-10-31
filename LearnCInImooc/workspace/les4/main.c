#include <stdio.h>

int main()
{
	printf("input the int value i:\n");
	int i,j;
	fscanf(stdin,"%d",&i);
	fprintf(stdout,"input the int value j:\n");
	scanf("%d",&j);
	if (0!=j){
		fprintf(stdout,"%d/%d=%d\n",i,j,i/j);
	}else{
	fprintf(stderr,"j != 0\n");
	return 1;
	}
	return 0;
}
