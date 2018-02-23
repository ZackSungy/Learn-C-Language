#include <stdio.h>
#include <ctype.h>

int main()
{
	int sign=1;
	char ch;
	printf("Enter phone number:");
	while((ch=getchar())!='\n')
	{
		if(sign){
			printf("In numeric form:");
			sign=0;
		}
		if('a'<=ch&&ch<='z' || 'A'<=ch && ch<='Z')
		{
			ch=toupper(ch);

			if(ch <= 'C')
				printf("2");
			else if(ch <= 'F')
				printf("3");
			else if(ch <= 'I')
				printf("4");
			else if(ch <= 'L')
				printf("5");
			else if(ch <= 'O')
				printf("6");
			else if(ch <= 'S')
				printf("7");
			else if(ch <= 'V')
				printf("8");
			else
				printf("9");
		}
		else
			printf("%c",ch);
	}
	printf("\n");
	return 0;
}
