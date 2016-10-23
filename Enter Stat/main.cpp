#include<stdio.h>
int main()
{
	int i, s[110], n = 0;
	for (i = 0; i < 101; i++)
	{
		scanf("%d", &s[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
	{
		if (0 <= s[i] && s[i] <= 100)
			printf("%d ", s[i]);
	}
	return 0;
}
