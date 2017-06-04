#include<cstdio>
#include<cstring>
using namespace std;

int min = 10000000000, B, n, Cow[20], vis[20];

void dfs(int hight)
{
	if (hight >= B)
	{
		if (hight - B < min)
			min = hight - B;
		return;
	}
	for (int i = 0; i < n; i++)
	if (!vis[i])
	{
		vis[i] = 1;
		dfs(hight + Cow[i]);
		vis[i] = 0;
	}
}

int main()
{
	memset(vis, 0, sizeof(vis));
	int judge = 0;
	scanf("%d%d", &n, &B);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &Cow[i]);
		judge += Cow[i];
	}
	if (judge < B)return 0;
	dfs(0);
	printf("%d", min);
	return 0;
}