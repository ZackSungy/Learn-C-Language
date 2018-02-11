#include <stdio.h>
#include <ctype.h>

int main()
{
	int sum=0;
	char ch;
	
	printf("Enter a sentence: ");
	while((ch=getchar())!='\n')
	{
		switch(toupper(ch))
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
			sum+=1;break;
		}
	}

	printf("Your sentence contains %d vowels\n",sum);
	return 0;
}
