#include<stdio.h>

void Quick_Sort(int left, int right, int*A)
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
	Quick_Sort(left, i - 1, A);
	Quick_Sort(i + 1, right, A);
}

int main()
{
	int n, Weight[1000], C, sum = 0, Goods = 0;
	scanf("%d%d", &n, &C);
	for (int i = 0; i < n; i++)
		scanf("%d", &Weight[i]);
	Quick_Sort(0, n - 1, Weight);
	for (int i = 0; i < n; i++)
	{
		sum += Weight[i];
		if (sum <= C)
			Goods++;
		else
			break;
	}
	printf("%d\n", Goods);
	return 0;
}