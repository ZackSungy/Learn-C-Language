#include<stdio.h>
#include<string.h>

int isp[100], A[100], vis[100];

int isprime(int a)
{
	int i;
	for (i = 2; i*i <= a; i++)
	{
		if (a%i == 0)
			return 0;
	}
	return 1;
}

void dfs(int cur, int n)
{
	if (cur == n && isp[A[n - 1] + A[0]])
	{
		for (int i = 0; i < n; ++i)
		{
			printf("%d ", A[i]);
		}
		printf("\n");
	}
	else
	{
		for (int i = 2; i <= n; ++i)
		{
			if (!vis[i] && isp[i + A[cur - 1]])
			{
				A[cur] = i;
				vis[i] = 1;
				dfs(cur + 1, n);
				vis[i] = 0;
			}
		}
	}
}


int main()
{
	int n, i, count = 0;
	while ((scanf("%d", &n) != EOF))
	{
		count++;
		memset(vis, 0, sizeof(vis));
		memset(A, 0, sizeof(A));
		memset(isp, 0, sizeof(isp));
		for (int i = 2; i <= n * 2; i++)
			isp[i] = isprime(i);
		for (i = 0; i < n; i++)
			A[i] = i + 1;
		printf("case %d:\n", count);
		dfs(1, n);
		printf("\n");
	}
	return 0;
}