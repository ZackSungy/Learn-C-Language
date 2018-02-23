#include <stdio.h>
#include <ctype.h>


int main(void)
{
	int sign,i;
	char ch,word[10000];
	
	printf("Enter a sentence: ");
	for(sign=0;(ch=getchar());sign++){
		if(ch=='.'||ch=='?'||ch=='!')
			break;	
		word[sign]=ch;
	}

	printf("Reversal of sentence:");
	for(i=sign;i>=0;i--){
		int sign_start,sign_end,print=0;
		if(word[i]!=' '){
			printf(" ");
			sign_end=i;
			while(word[i]!=' '&&i>=0)
				sign_start=i--;
			i++;
			print=1;

		}
		if(print)
			for(int j=sign_start;j<=sign_end;j++)
				printf("%c",word[j]);
	}
	printf("%c\n",ch);

	return 0;
}
