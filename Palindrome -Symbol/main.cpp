#include<stdio.h>
int fun(char *s)
{
	char *p = s;
	while (*p)
		p++;
	p = p - 1;
	while (s < p)
	{
		if (*s != *p)
			return 0;
		s++, p--;
	}
	return 1;
}
int fun(char *s);
int main()
{
	char a[3][20] = { "1234321", "abcdef", "***m***" };
	int i;
	for (i = 0; i < 3; i++)
	{
		if (fun(a[i]))
			puts(a[i]);
	}
	return 0;
}