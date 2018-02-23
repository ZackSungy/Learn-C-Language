#include <stdio.h>
#include <ctype.h>


int main()
{
	int word_judge[26]={0};
	char ch;

	printf("Enter first word: ");
	while((ch=getchar())!='\n'){
		ch=tolower(ch);
		if(isalpha(ch)){
			word_judge[ch-'a']++;
		}
	}

	printf("Enter second word: ");
	while((ch=getchar())!='\n'){
		ch=tolower(ch);
		if(isalpha(ch)){
			word_judge[ch-'a']--;
		}
	}

	for(int i=0;i<26;i++){
		if(word_judge[i]){
			printf("The words are not anagrams\n");
			return 0;
		}
	}

	printf("The words are anagarams\n");
	return 0;
	
}
