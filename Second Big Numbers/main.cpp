#include<stdio.h>
int main()
{
	int i, n = 0, s[900], j, a;
	for (i = 0;; i++)
	{
		scanf("%d", &s[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (s[j] < s[j + 1])
			{
				a = s[j];
				s[j] = s[j + 1];
				s[j + 1] = a;
			}
		}
	}
	printf("%d\n", s[1]);
	return 0;
}