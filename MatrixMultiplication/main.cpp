#include<cstdio>
using namespace std;

int main()
{
	int n, m, A[30][30], B[30][30], C[30][30];
	scanf("%d%d", &n, &m);
	for (int i = 0; i<n; i++)
	for (int j = 0; j<n; j++)
	{
		scanf("%d", &A[i][j]);
		C[i][j] = A[i][j];
	}


	for (int i = 1; i<m; i++)
	{
		for (int j = 0; j<n; j++)
		for (int k = 0; k<n; k++)
			B[j][k] = C[j][k];

		for (int j = 0; j<n; j++)
		for (int k = 0; k<n; k++)
		{
			int sum = 0;
			for (int l = 0; l<n; l++)
				sum += A[j][l] * B[l][k];
			C[j][k] = sum;
		}
	}
	if (m == 0)
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			if (i == j)
				printf("%d ", 1);
			else
				printf("%d ", 0);
		}
		printf("\n");
	}
	else
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
			printf("%d ", C[i][j]);
		printf("\n");
	}
	return 0;
}