#include <stdio.h>
#include <ctype.h>

int main()
{
	int sum=0,word[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
	char ch;
	printf("Enter a word: ");

	while((ch=getchar())!='\n'){
		sum+=word[toupper(ch)-'A'];
	}
	printf("Scrabble value: %d\n",sum);
	return 0;
}
