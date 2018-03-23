#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26],int counts2[26]);

int main()
{
	int word1[26],word2[26];
	printf("Enter first word: ");
	read_word(word1);
	
	printf("Enter second word: ");
	read_word(word2);

	printf("The two word is ");
	if(equal_array(word1,word2))
		printf("equal!\n");
	else
		printf("not equal!\n");
	return 0;
}

void read_word(int a[26])
{
	char ch;
	while((ch=getchar())!='\n'){
		ch=tolower(ch);
		a[ch-'a']++;
	}
}

bool equal_array(int a[26],int b[26])
{
	int i;
	for(i=0;i<26;i++){
		if(a[i]^b[i])
			return false;
	}
	return true;
}
