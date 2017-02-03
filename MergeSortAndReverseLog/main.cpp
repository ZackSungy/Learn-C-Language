#include<stdio.h>

int A[100], T[100], cnt = 0;
void merge_sort(int *A, int x, int y, int *T)
{
	if (y - x > 1)
	{
		int m = x + (y - x) / 2;
		merge_sort(A, x, m, T);
		merge_sort(A, m, y, T);
		int i = x, q = m, p = x;
		while (q<y || p<m)
		{
			if (q >= y || (p < m&&A[p] <= A[q]))
				T[i++] = A[p++];
			else
			{
				T[i++] = A[q++];
				cnt += m - p;
			}
		}
		for (i = x; i < y; i++)
			A[i] = T[i];
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	merge_sort(A, 0, n, T);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
	printf("%d\n", cnt);
	return 0;
}