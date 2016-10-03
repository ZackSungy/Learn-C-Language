#include<stdio.h>
int main()
{
	int i = 0;
	char p[1000];
	char *q;
	scanf("%s", &p);
	q = p;
	while (*q)
	{
		q++;
		i++;
	}
	q--;
	while (i >= 0)
	{
		printf("%c", *(q--));
		i--;
	}
	return 0;
}

