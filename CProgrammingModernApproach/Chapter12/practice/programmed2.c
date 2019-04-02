#include <stdio.h>

#define MSG_LEN 100

int main()
{
	char msg[MSG_LEN],*p=msg,*q,c;

	printf("Enter a message:");
	while((c=getchar())!='\n'&&p<msg+MSG_LEN){
		if('a'<= c && c <= 'z'){
			*p++=c;
		}
		else if('A'<= c && c<= 'Z'){
			*p++=c+32;
		}
	}

	for(q=msg,p--;p>q;p--,q++){
		if(*p!=*q)
			break;
	}

	
	if(p<=q)
		printf("Palindrome\n");

	else
		printf("Not a Palindrome\n");

	return 0;
}
