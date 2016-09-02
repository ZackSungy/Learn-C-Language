#include <stdio.h>
void delchar(char *s, char c)
{
	char *p, *q;
	for (p = s; *p&&*p != c; p++);
	q = p;
	while (*p)
	{
		while (*p&&*p == c)
			p++;
		while (*p&&*p != c)
			*q++ = *p++;
	}
	q = '\0';
}
int main()
{
	char str[] = "There is a bee in the sky", c = 'e';
	delchar(str, c);
	puts(str);
}