#include<stdio.h>
#include<string.h>
#include<math.h>



int main()
{
	int n, c = 0, prime[100000], vis[100000];
	double m;
	scanf("%d", &n);
	m = sqrt(n + 0.5);
	memset(vis, 0, sizeof(vis));
	memset(prime, 0, sizeof(prime));
	for (int i = 2; i <= m; i++)
	if (!vis[i])
	{
		for (int j = i*i; j <= n; j += i*i)
		{
			vis[j] = 1;
		}
	}
	int sum = 0;
	for (int i = 2; i <= n; i++)
	if (!vis[i])
		printf("%d\n", i);
	return 0;
}