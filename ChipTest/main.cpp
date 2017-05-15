#include<cstdio>
#include<cstring>
#define Max 1001
using namespace std;
int A[Max][Max], n;

/*void dfs(int sum£¬int a)
{
if(sum==0)return;
if(sum==a)
{
return;
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
if(A[i][j])
A[]


}
}*/

int main()
{
	memset(A, 0, sizeof(A));
	int d[Max];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
		scanf("%d", &A[i][j]);
	for (int i = 1; i <= n; i++)
	{
		memset(d, 0, sizeof(d));
		int sum = 0, a = 0;
		for (int j = 1; j <= n; j++)
			sum += A[i][j];
		for (int j = 1; j <= n; j++)
		if (A[i][j])
		{
			int k = 1;
			for (int k = 1; k <= n; k++)
			if (A[i][k] != A[j][k])
			{
				k = 0;
				break;
			}

			if (k)
			{
				d[j] = 1;
				a++;
			}
			else
				break;
		}
		if (sum == a&&sum)
			break;
	}
	for (int i = 1; i <= n; i++)
	if (d[i])
		printf("%d ", i);
	return 0;
}