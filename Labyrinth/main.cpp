#include<stdio.h>

#include<string.h>
#define MAXN 1000
int mat[MAXN][MAXN], vis[MAXN][MAXN];
void dfs(int x, int y)
{
	if (!mat[x][y] || vis[x][y])return;
	vis[x][y] = 1;
	dfs(x - 1, y - 1);
	dfs(x - 1, y);
	dfs(x - 1, y + 1);
	dfs(x, y - 1);
	dfs(x, y + 1);
	dfs(x + 1, y - 1);
	dfs(x + 1, y);
	dfs(x + 1, y + 1);
}
int main()
{
	int n;
	int s[MAXN][MAXN];
	memset(mat, 0, sizeof(mat));
	memset(vis, 0, sizeof(vis));
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &s[i][j]);
		}
	}
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		if (!vis[i][j] && mat[i][j])
		{
			count++;
			dfs(i, j);
		}
	}
	printf("%d\n", count);
	return 0;
}