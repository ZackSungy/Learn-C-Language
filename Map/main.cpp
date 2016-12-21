#include <stdio.h>  
#define MAXN 10  
int dx[] = { -1, 1, 0, 0 }, dy[] = { 0, 0, -1, 1 };//�ƶ��ķ����ϣ��£�����
char name[] = { 'U', 'D', 'L', 'R' };
int q[MAXN * MAXN]; //���У����浱ǰ�����  
int vis[MAXN][MAXN], nMap[MAXN][MAXN];
int m, n; //�С�����  
int dir[MAXN * MAXN];
int fa[MAXN][MAXN], dis[MAXN][MAXN], last_dir[MAXN][MAXN];
void funcInit();
void bfs(int x, int y);
void funcInput();
void print_path(int x, int y);
int main()
{
	funcInput();
	funcInit();
	bfs(0, 0);
	print_path(m - 1, n - 1);
	return 0;
}
void funcInit()
{
	int i, j;
	for (i = 0; i != m; ++i)
	{
		for (j = 0; j != n; ++j)
		{
			vis[i][j] = 0;
			dis[i][j] = 0;
		}
	}
}
void funcInput()
{
	int i, j;
	scanf("%d %d", &m, &n);
	for (i = 0; i < m; ++i)
	{
		for (j = 0; j< n; ++j)
		{
			scanf("%d", &nMap[i][j]);
		}
	}
}
void bfs(int x, int y)
{
	int front = 0, rear = 0;
	int d, u; //�����ǡ������  

	u = x * m + y;
	vis[x][y] = 1;
	fa[x][y] = u;
	q[rear++] = u; //����ǰ����÷������  

	while (front != rear)
	{
		u = q[front++];
		x = u / m; y = u % m;
		for (d = 0; d != 4; ++d)
		{
			int nx = x + dx[d], ny = y + dy[d];
			if (nx >= 0 && nx < m && ny >= 0 && ny < n && !vis[nx][ny] && !nMap[nx][ny])
			{
				int v = nx * m + ny;
				q[rear++] = v;
				vis[nx][ny] = 1;
				fa[nx][ny] = u;
				dis[nx][ny] = dis[x][y] + 1; //��¼·������  
				last_dir[nx][ny] = d; //��¼�ƶ�������  
			}
		}
	}
}
void print_path(int x, int y)
{
	int c = 0;

	while (1)
	{
		int fx = fa[x][y] / m;
		int fy = fa[x][y] % m;
		if (fx == x && fy == y) break;
		dir[c++] = last_dir[x][y];
		x = fx; y = fy;
	}
	while (c--)
	{
		putchar(name[dir[c]]);
		putchar('/n');
	}
	printf("���·������Ϊ:%d/n", dis[m - 1][n - 1]);
}




