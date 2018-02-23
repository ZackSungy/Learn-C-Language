#include <stdio.h>

int main()
{
	int digit_count[10]={0},i;
	char ch;

	printf("Enter a number:");
	while((ch=getchar())!='\n'){
		ch-='0';
		if(ch<0||ch>9)
			break;

		digit_count[ch]++;
	}

	printf("Digit:\t\t\b\b");
	for(i=0;i<10;i++){
		printf("%d ",i);
	}
	printf("\n");

	printf("Occurrences:  ");	
	for(i=0;i<10;i++){
		printf("%d ",digit_count[i]);
	}
	printf("\n");

	return 0;
}
