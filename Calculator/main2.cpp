#include<stdio.h>
int main()
{
	int m, n;
	char c;
	scanf("%d", &n);
	do
	{
		scanf("%c", &c);
	} while (!(c == '+' || c == '-' || c == '*' || c == '/'));
	scanf("%d", &m);
	if (c == '+')
		printf("%d\n", n + m);
	if (c == '-')
		printf("%d\n", n - m);
	if (c == '*')
		printf("%d\n", n* m);
	if (c == '/')
		printf("%d\n", n / m);
	return 0;
}
