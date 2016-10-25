#include<stdio.h>
int main()
{
	char s[100];
	int i, m, j = 0, k = 0, ave;
	for (i = 0;; i++)
	{
		scanf("%c", &s[i]);
		j++;
		if (s[i] == ' ')
		{
			k++;
		}
		if (s[i] == '\n')
		{
			break;
		}
	}
	ave = (j - 1 - k) / (k + 1);
	printf("%d\n", ave);
	return 0;
}
