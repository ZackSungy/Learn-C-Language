#include<stdio.h>
char *s = "`123456789-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
	int i, c;
	while ((c = getchar()) != EOF)
	{
		for (i = 0; s[i] && s[i] != c; i++);
		if (s[i])
			putchar(s[i - 1]);
		else
			putchar(c);
	}
	return 0;
}
