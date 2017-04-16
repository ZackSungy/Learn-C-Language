#include<stdio.h>
#include<string.h>

int A[1001], n, count = 0;

void Q(int a)
{
	if (A[a] == 0)
		return;
	count++;
	Q(A[a]);
}

void P(int a)
{
	if (A[a] == 0)
		return;
	count++;
	P(A[a]);
	int x = A[a];
	for (int i = 0; i<n; i++)
	if (A[i] == x)
		A[i] = 0;
}

int main()
{
	int m, a, b, num[1001], B[1001];
	scanf("%d", &n);
	scanf("%d", &m);
	for (int i = 0; i<n - 1; i++)
	{
		scanf("%d%d", &a, &b);
		A[b] = a;
	}
	for (int i = 0; i<m; i++)
	{
		char z;
		scanf("\n%c", &z);
		B[i] = z == 'Q' ? 1 : 0;
		scanf("%d", &num[i]);
	}
	for (int i = 0; i<m; i++)
	{
		if (B[i])
			Q(num[i]);
		else
			P(num[i]);
		printf("%d\n", count);
		count = 0;
	}
	return 0;
}