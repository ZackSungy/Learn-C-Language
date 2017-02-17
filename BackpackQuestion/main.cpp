#include<stdio.h>
int main()
{
	int n, C, V[10001], W[10001], d[100][100];
	scanf("%d%d", &n, &C);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &V[i], &W[i]);
	for (int i = n; i >= 1; i--)
	for (int j = 0; j <= C; j++)
	{
		d[i][j] = (i == n ? 0 : d[i + 1][j]);
		if (j >= V[i])
			d[i][j] = d[i][j] > d[i + 1][j - V[i]] + W[i] ? d[i][j] : d[i + 1][j - V[i]] + W[i];
	}
	printf("%d\n", d[1][C]);
	return 0;
}