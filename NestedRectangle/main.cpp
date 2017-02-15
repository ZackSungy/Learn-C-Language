#include<stdio.h>
#include<string.h>

int d[1000], n, G[100][100], Dot[1000];

int dp(int i)
{
	int &ant = d[i];
	if (ant > 0)
		return ant;
	ant = 1;
	for (int j = 1; j <= n; j++)
	if (G[i][j])
		ant = ant > (dp(j) + 1) ? ant : (dp(j) + 1);
	return ant;
}

void print_ans(int i)
{
	printf("%d", i);
	for (int j = 1; j <= n; j++)
	if (G[i][j] && d[i] == d[j] + 1)
	{
		print_ans(j);
		break;
	}
}

int main()
{
	memset(d, 0, sizeof(d));
	memset(G, 0, sizeof(G));
	int A[1000], B[1000], max, ans = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d%d", A + i, B + i);
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
	if (A[i] > A[j] && B[i] > B[j] || A[i] > B[j] && B[i] > A[j])
		G[i][j] = 1;
	for (int i = 1; i <= n; i++)
		dp(i);
	for (int i = 1; i <= n; i++)
	if (ans < d[i])
		max = i;
	for (int i = 1; i <= n; i++)
	if (d[i] == d[max])
	{
		print_ans(i);
		printf("\n");
	}
	return 0;
}