#include <stdio.h>

int main()
{
	int sign=0,move;
	char ch,word[100000];
	printf("Enter message to be encrypted :");
	while((ch=getchar())!='\n'){
		word[sign]=ch;
		sign++;
	}

	printf("Enter shift amount (1-25):");
	scanf("%d",&move);

	printf("Encrypted message: ");
	for(int i=0;i<sign;i++){
		if('A'<=word[i] && word[i]<='Z'){
			ch=(word[i]-'A'+move)%26+'A';
			putchar(ch);
		}
		else if('a'<=word[i] && word[i]<='z'){
			ch=(word[i]-'a'+move)%26+'a';
			putchar(ch);
		}
		else
			putchar(word[i]);
	}
	putchar('\n');

	return 0;
}
