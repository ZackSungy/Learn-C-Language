#include <stdio.h>
#include <ctype.h>

int main()
{
	_Bool sign=0;
	int count=1;
	double avg=0;
	char ch;
	printf("Enter a sentence: "); 
	while((ch=getchar())!='\n')
	{
		if(ch==' ')
		{
			if(sign)
			{
				count++;
				sign=0;
			}
			continue;
		}
		else
		{
			avg++;
			sign=1;
		}
	}
	printf("Average word length: %.1f\n",avg/count);
	return 0;
}
