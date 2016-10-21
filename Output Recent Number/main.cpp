#include<stdio.h>
int main()
{
	int i, n = 0, s[999], j, a, min = 1000000;
	for (i = 0;; i++)
	{
		scanf("%d", &s[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		if (s[j]>s[j + 1])
		{
			a = s[j];
			s[j] = s[j + 1];
			s[j + 1] = a;
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		if ((s[i + 1] - s[i]) < min&&s[i + 1] != s[i])
			min = s[i + 1] - s[i];
	}
	for (i = 0; i < n - 1; i++)
	{
		if (min == s[i + 1] - s[i])
			printf("%d %d ", s[i + 1], s[i]);
	}
	return 0;
}