#include<stdio.h>


void Quick_Sort_1(int left, int right, int *A)
{
	if (left > right)
		return;
	int i = left;
	int j = right;
	int key = A[i];
	while (i < j)
	{
		while (A[j] >= key&&i < j)j--;
		A[i] = A[j];
		while (A[i] <= key&&i < j)i++;
		A[j] = A[i];
	}
	A[i] = key;
	Quick_Sort_1(left, i - 1, A);
	Quick_Sort_1(i + 1, right, A);
}


int main()
{
	int n, C, W[1000], Boat = 0, i = 0, j;
	scanf("%d%d", &n, &C);
	for (int i = 0; i < n; i++)
		scanf("%d", &W[i]);
	Quick_Sort_1(0, n - 1, W);
	for (j = 0; W[j] < C&&j < n; j++);
	j--;
	Boat += n - j - 1;
	while (i <= j)
	{
		if ((W[i] + W[j]) <= C)
			i++;
		j--;
		Boat++;
	}
	printf("%d\n", Boat);
	return 0;
}