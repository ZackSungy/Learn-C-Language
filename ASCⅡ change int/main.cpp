#include<stdio.h>
int main()
{
	int s[100], i, n = 0;
	for (i = 0;; i++)
	{
		s[i] = getchar();
		n++;
		if (s[i] == '\n')
			break;
	}
	for (i = 0; i < n - 1; i++)
		printf("%d", s[i] - 48);
	return 0;
}