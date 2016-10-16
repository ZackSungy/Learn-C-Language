#include<stdio.h>
int main()
{
	int n, i, j, k, a;
	char s = 32;
	do
	{
		scanf("%d", &n);
	} while (n<0 && n > 20);
	a = n;
	for (i = 1; i <= n; i++)
	{
		k = 0;
		while (k < i)
		{
			printf("%c", s);
			k++;
		}
		for (j = 2 * a - 1; 0 < j; j--)
		{
			printf("#");
		}
		a--;
		printf("\n");
	}
	return 0;
}