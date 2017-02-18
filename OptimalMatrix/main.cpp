#include<stdio.h>
#include<string.h>

int A[10001], INF = 1000000;

int ma(int i, int j)
{
	if (i == j || i == j - 1)
		return 0;
	int u, min = INF;
	for (int k = i + 1; k < j; k++)
	{
		u = ma(i, k) + ma(k, j) + A[i] * A[k] * A[j];
		if (min>u)
		{
			min = u;
		}
	}
	return min;
}


int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		memset(A, 0, sizeof(A));
		for (int i = 0; i <= n; i++)
			scanf("%d", &A[i]);
		printf("%d\n", ma(0, n));
		return 0;
	}
}