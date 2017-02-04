#include<stdio.h>
int A[100];

void Quick_Sort(int *A, int left, int right)
{
	if (left > right)
		return;
	int i = left;
	int j = right;
	int key = A[i];
	while (i < j)
	{
		while (i < j&&A[j] >= key)
			j--;
		A[i] = A[j];
		while (i < j&&A[i] <= key)
			i++;
		A[j] = A[i];
	}
	A[i] = key;
	Quick_Sort(A, left, i - 1);
	Quick_Sort(A, i + 1, right);
}

int Lower_Bound(int *A, int x, int y, int v)
{
	int m;
	while (x < y)
	{
		m = (x + y) / 2;
		if (A[m] >= v)
			y = m;
		else
			x = m + 1;
	}
	return x;
}

int Upper_Bound(int *A, int x, int y, int v)
{
	int m;
	while (x < y)
	{
		m = x + (y - x) / 2;
		if (A[m] <= v)
			x = m + 1;
		else
			y = m;
	}
	return x;
}

int main()
{
	int n, a, b, c = 0;
	scanf("%d", &n);//m是A【100】其中一个数
	for (int i = 1; i <= n; i++)
		scanf("%d", &A[i]);
	scanf("%d%d", &a, &b);
	Quick_Sort(A, 1, n);
	for (int i = 1; i <= n; i++)
		printf("%d ", A[i]);
	printf("\n");
	printf("%d\n", Upper_Bound(A, 1, n, b) - Lower_Bound(A, 1, n, a));
}