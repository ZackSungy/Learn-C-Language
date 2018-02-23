#include <stdio.h>

int main()
{
	char ch1,ch2;
	printf("Enter a first and last name: ");
	scanf(" %c ",&ch1);

	while(getchar()!=' ');

	printf("You enered the name:");
	while((ch2=getchar())!='\n'){
		if(ch2==' ')
			continue;
		putchar(ch2);
	}

	printf(", %c.\n",ch1);
	return 0;
}
