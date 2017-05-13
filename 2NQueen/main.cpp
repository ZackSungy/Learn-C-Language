#include<cstdio>
#include<cstring>
#define Max 8
using namespace std;
int A[Max][Max], ch[Max], ch1[Max], n, count = 0;

void fun2(int cur)
{
	if (cur == n)
	{
		count++;
		return;
	}
	for (int i = 0; i<n; i++)
	{
		int ok = 1;
		if (A[cur][i] == 0)continue;
		ch1[cur] = i;
		for (int j = 0; j<cur; j++)
		if (ch1[cur] == ch1[j] || cur - ch1[cur] == j - ch1[j] || cur + ch1[cur] == j + ch1[j])
		{
			ok = 0;
			break;
		}
		if (ok)
			fun2(cur + 1);
	}
}

void fun(int a)
{
	if (a == n)
	{
		fun2(0);
		return;
	}
	for (int i = 0; i<n; i++)
	{
		int ok = 1;
		if (A[a][i] == 0)continue;
		ch[a] = i;
		for (int j = 0; j<a; j++)
		if (ch[a] == ch[j] || a - ch[a] == j - ch[j] || a + ch[a] == j + ch[j])
		{
			ok = 0;
			break;
		}
		if (ok)
		{
			A[a][i] = 0;
			fun(a + 1);
			A[a][i] = 1;
		}
	}
}

int main()
{
	memset(A, 0, sizeof(A));
	memset(ch, 0, sizeof(ch));
	scanf("%d", &n);
	for (int i = 0; i<n; i++)
	for (int j = 0; j<n; j++)
		scanf("%d", &A[i][j]);
	fun(0);
	printf("%d", count);
}