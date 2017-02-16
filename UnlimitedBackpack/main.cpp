#include<stdio.h>
#include<string.h>

int INF = 100000000, V[100001];

void pa(int *p, int C)
{
	while (C)
	{
		printf("%d ", p[C]);
		C -= V[p[C]];
	}

}

int main()
{
	int n, C, W[100001], max[10001], best[10001];
	scanf("%d%d", &n, &C);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", &V[i], &W[i]);
	max[0] = 0;
	for (int i = 1; i <= C; i++)
		max[i] = -INF;
	for (int i = 0; i <= C; i++)
	for (int j = 1; j <= n; j++)
	if (i >= V[j])
	if (max[i] < max[i - V[j]] + W[j])
	{
		max[i] = max[i - V[j]] + W[j];
		best[i] = j;
	}
	printf("%d\n", max[C]);
	pa(best, C);
	printf("\n");
	return 0;
}