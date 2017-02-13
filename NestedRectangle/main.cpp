#include<stdio.h>

void Quick_sort(int*A, int *B, int*C, int left, int right)
{
	if (left > right)return;
	int i = left;
	int j = right;
	int key = A[i];
	int key2 = B[i];
	int key3 = C[i];
	while (j > i)
	{
		while (j > i&&A[j] >= key)j--;
		A[i] = A[j];
		B[i] = B[j];
		C[i] = C[j];
		while (j > i&&A[i] <= key)i++;
		A[j] = A[i];
		B[j] = B[i];
		C[j] = C[i];
	}
	A[i] = key;
	B[i] = key2;
	C[i] = key3;
	Quick_sort(A, B, C, left, i - 1);
	Quick_sort(A, B, C, i + 1, right);
}

int main()
{
	int n, A[1000], B[1000], C[1000], max = -1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d%d", &A[i], &B[i]);
	Quick_sort(A, B, C, 0, n - 1);
	for (int i = 0; i < n; i++)
		C[i] = A[i] + B[i];
	Quick_sort(C, A, B, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d %d\n", A[i], B[i]);
	for (int i = 0; i < n; i++)
	{
		int sum = 1, a = A[0], b = B[0];
		for (int j = 0 + i; j < n; j++)
		{
			if (A[j]>a && B[j]>b || A[j]>b && B[j] > a)
			{
				a = A[j];
				b = B[j];
				sum++;
			}
		}
		if (sum > max)
			max = sum;
	}
	printf("%d\n", max);
	return 0;
}