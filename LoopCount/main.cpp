#include<cstdio>
#include<cstring>
#define Max 200
using namespace std;

int main()
{
	int A[Max][Max], vis[Max][Max], n, m, tot = 0, x = 0, y = 0;
	memset(A, 0, sizeof(A));
	memset(vis, 0, sizeof(vis));
	scanf("%d%d", &n, &m);
	for (int i = 0; i<n; i++)
	for (int j = 0; j<m; j++)
		scanf("%d", &A[i][j]);
	printf("%d ", A[0][0]);
	vis[0][0] = 1;
	while (tot<n*m - 1)
	{
		while (!vis[x + 1][y] && x + 1<n)
		{
			printf("%d ", A[++x][y]);
			vis[x][y] = 1;
			++tot;
		}
		while (!vis[x][y + 1] && y + 1<m)
		{
			printf("%d ", A[x][++y]);
			vis[x][y] = 1;
			++tot;
		}
		while (!vis[x - 1][y] && x - 1 >= 0)
		{
			printf("%d ", A[--x][y]);
			vis[x][y] = 1;
			++tot;
		}
		while (!vis[x][y - 1] && y - 1 >= 0)
		{
			printf("%d ", A[x][--y]);
			vis[x][y] = 1;
			++tot;
		}
	}
	return 0;
}