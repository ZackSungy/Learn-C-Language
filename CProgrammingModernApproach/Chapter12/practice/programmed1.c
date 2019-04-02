#include <stdio.h>

#define MSG_LEN 100

int main()
{
	int i=0;
	char c,msg[MSG_LEN],*p;

	printf("Enter a message:");
	while((c=getchar())!='\n'&&i<MSG_LEN){
		msg[i++]=c;
	}

	printf("Reversal is:");
	for(p=msg+i-1;p>=msg;p--){
		printf("%c",*p);
	}

	printf("\n");
}
