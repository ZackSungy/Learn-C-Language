#include<stdio.h>

int Layer, vis[1000], Step[1000], max = -1;

void Compare(int i, int A[100][100], int n, int sum)
{
	if (n == Layer)
	{
		if (sum > max)
		{
			max = sum;
			for (int i = 0; i < Layer; i++)
				Step[i] = vis[i];
		}
		return;
	}
	sum += A[n][i];
	vis[n] = 1;
	Compare(i, A, n + 1, sum);
	vis[n] = 2;
	Compare(i + 1, A, n + 1, sum);
	vis[n] = 0;
}

int main()
{
	int k = 0, A[100][100];
	scanf("%d", &Layer);
	for (int i = 0; i < Layer; i++)
	for (int j = 0, k = i + 1; j < k; j++)
		scanf("%d", &A[i][j]);
	Compare(0, A, 0, 0);
	printf("%d\n", max);
	for (int i = 0; i < Layer - 1; i++)
	{
		if (Step[i] == 1)
			printf("×ó");
		if (Step[i] == 2)
			printf("ÓÒ");
	}
	return 0;
}