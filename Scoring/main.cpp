#include<stdio.h>
int s[11], i;

void dfs(int m, int n)
{
	if (n == 11 && m == 100)
	{
		for (int i = 1; i <= 10; i++)
			printf("%d ", s[i]);
		printf("\n");
	}
	if (n == 11)
		return;
		s[n] = 1;
		dfs(m * 2, n + 1);
		s[n] = 0;
		dfs(m - n, n + 1);
}
int main()
{
	dfs(10, 1);
	return 0;
}