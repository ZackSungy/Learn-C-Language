#include<stdio.h>
#include<string.h>
int n, Trees[901][901], INF = 100000000;

int gs(int n, int m)
{
	int max = -INF, sum = 1, i, j;
	for (i = 1; i <= m; i++)
	{
		if (Trees[n - 2][Trees[n - 1][Trees[n][i]]] == Trees[n - 2][Trees[n - 1][Trees[n][i + 1]]] && Trees[n - 2][Trees[n - 1][Trees[n][i]]] != 0)
		{
			for (j = i; Trees[n - 2][Trees[n - 1][Trees[n][j]]] == Trees[n - 2][Trees[n - 1][Trees[n][j + 1]]] && j <= m &&Trees[n - 2][Trees[n - 1][Trees[n][j]]] != 0; j++)
			{
				sum++;
			}
			i = j;
			if (max < sum)
				max = sum;
			sum = 1;
		}
	}
	return max;
}

int s(int n, int m)
{
	int max = -INF, sum = 1, i, j;
	for (i = 1; i <= m; i++)
	{
		if (Trees[n][Trees[n][i]] == Trees[n][Trees[n][i + 1]])
		{
			for (j = i; Trees[n][Trees[n][j]] == Trees[n][Trees[n][j + 1]] && Trees[n][Trees[n][j]] != 0 && j <= m; j++)
			{
				sum++;
			}
			i = j;
			if (max < sum)
				max = sum;
			sum = 1;
		}
	}
	return max;
}


int main()
{
	int i = 1, j = 1, k, max = -INF;
	memset(Trees, 0, sizeof(Trees));
	scanf("%d", &n);
	while (i != 0 || j != 0)
	{
		scanf("%d%d%d", &i, &j, &k);
		Trees[i][j] = k;
	}
	for (n; 1 <= n; n--)
	{
		int u, t;
		u = gs(n, 1 << n);
		t = s(n - 1, 1 << (n - 1));
		if (u > max)
			max = u;
		if (t > max)
			max = t;
	}
	printf("%d\n", max);
	return 0;
}


