#include <stdio.h>
#include <stdbool.h>
int main()
{
	int i;
	char n;
	bool digit_seen[10]={false},digit_confirm[10]={false};

	printf("Enter a number: ");
	while((n=getchar())!='\n'){
		n-='0';
		if(n<0||n>9)
			break;

		if(digit_seen[n])
		{
			digit_confirm[n]=true;
		}
		digit_seen[n]=true;
	}

	printf("Repeated digit(s): ");
	for(i=0;i<10;i++){
		if(digit_confirm[i])
			printf("%d ",i);
	}
	putchar('\n');
	return 0;
}
