#include<stdio.h>
#include<string.h>
int get_next(int x)
{
	int a, b, n;
	char s[10];
	sprintf(s, "%d", x);
	n = strlen(s);
	for (int i = 0; i < n; i++)
	for (int j = i + 1; j < n; j++)
	if (s[i]>s[j])
	{
		char t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
	sscanf(s, "%d", &b);
	for (int i = 0; i < n / 2; i++)
	{
		char t = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = t;
	}
	sscanf(s, "%d", &a);
	return a - b;
}
int main()
{
	int s[1000];
	int	i;
	scanf("%d", &s[0]);
	printf("%d", s[0]);
	for (i = 0;; i++)
	{
		printf("->");
		s[i + 1] = get_next(s[i]);
		printf("%d", s[i + 1]);
		if (s[i + 1] == s[i])
			break;
	}
	return 0;
}

