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

int bsearch(int *A, int x, int y, int v)
{
	int m;
	while (x < y)
	{
		m = x + (y - x) / 2;
		if (A[m] == v)return m;
		else if (A[m]>v)
			y = m;
		else
			x = m + 1;
	}
	return -1;
}

int main()
{
	int n, m, c = 0;
	scanf("%d%d", &n, &m);//m是A【100】其中一个数
	for (int i = 1; i <= n; i++)
		scanf("%d", &A[i]);
	Quick_Sort(A, 1, n);
	c = bsearch(A, 1, n, m);
	printf("%d\n", c);
}