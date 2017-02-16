#include<stdio.h>
#include<string.h>

int INF = 100000000, n, V[101];

void print_ans(int *d, int S)
{
	for (int i = 1; i <= n; i++)
	if (S >= V[i] && d[S] == d[S - V[i]] + 1)
	{
		printf("%d ", V[i]);
		print_ans(d, S - V[i]);
		break;
	}
}

int main()
{
	int S, min[10001], max[10001];
	while (scanf("%d%d", &n, &S) != EOF)
	{
		memset(min, 0, sizeof(min));
		memset(max, 0, sizeof(max));
		memset(V, 0, sizeof(V));
		for (int i = 1; i <= n; i++)
			scanf("%d", &V[i]);
		for (int i = 1; i <= S; i++)
		{
			min[i] = INF;
			max[i] = -INF;
		}
		for (int i = 0; i <= S; i++)
		for (int j = 1; j <= n; j++)
		if (i >= V[j])
		{
			min[i] = min[i]<min[i - V[j]] + 1 ? min[i] : min[i - V[j]] + 1;
			max[i] = max[i]>max[i - V[j]] + 1 ? max[i] : max[i - V[j]] + 1;
		}
		printf("%d %d\n", min[S], max[S]);
		print_ans(min, S);
		printf("\n");
		print_ans(max, S);
	}
}