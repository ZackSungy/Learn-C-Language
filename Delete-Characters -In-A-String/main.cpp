#include <stdio.h>
void delchar(char *s, char c)
{
	char *p, *q;
	for (p = q = s; *p; p++)
	{
		if (*p != c)
		{
			*q = *p;
			q++;
		}
	}
	*q = '\0';
}
int main()
{
	char str[] = "There is a bee in the sky", c = 'e';
	delchar(str, c);
	puts(str);
}