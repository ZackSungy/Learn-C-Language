#include<stdio.h>
int main()
{
	int n, b, i, s[500];
	scanf("%d%d", &b, &n);
	for (i = 0; n > 0; i++)
	{
		s[i] = n%b;
		n = n / b;
	}
	i--;
	for (i; 0 <= i; i--)
	{
		printf("%d", s[i]);
	}
	return 0;
}