#include<stdio.h>
int main()
{
	char s[100];
	int i, m = 0, j = 0, k = 0, ave;
	for (i = 0;; i++)
	{
		scanf("%c", &s[i]);
		k++;
		if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')
		{
			j++;
		}
		if (s[i] == '\n')
		{
			break;
		}
	}
	for (i = 0; i < k; i++)
	{
		if (('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z') && (!('a' <= s[i + 1] && s[i + 1] <= 'z' || 'A' <= s[i + 1] && s[i + 1] <= 'Z')))
		{
			m++;
		}
	}
	printf("%d\n", j);
	printf("%d\n", m);
	ave = j / m;
	printf("%d\n", ave);
	return 0;
}
