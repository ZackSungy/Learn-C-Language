#include<stdio.h>
int main()
{
	int  i, n, j, x, y = 1, k, sum = 0, num;
	char s[500];
	scanf("%d", &n);
	for (i = 0;; i++)
	{
		scanf("%c", &s[i]);
		if (s[i] == '\n')
			break;
	}
	i--;
	k = i;
	for (i; 1 <= i; i--)
	{
		x = n;
		if (i == k)
			x = 1;
		else if (i == k - 1)
			x = n;
		else
		for (j = 0; j < y; j++)
		{
			x = x*n;
		}
		num = x*(s[i] - 48);
		sum = sum + num;
		if (k>i + 1)
			y++;
	}
	printf("%d\n", sum);
	return 0;
}