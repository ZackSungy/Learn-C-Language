#include<stdio.h>


void Quick_Sort_1(int left, int right, double*A, double*B)
{
	if (left > right)
		return;
	int i = left;
	int j = right;
	double key = A[i], key2 = B[i];
	while (i < j)
	{
		while (A[j] <= key&&i < j)j--;
		A[i] = A[j];
		B[i] = B[j];
		while (A[i] >= key&&i < j)i++;
		A[j] = A[i];
		B[j] = B[i];
	}
	A[i] = key;
	B[i] = key2;
	Quick_Sort_1(left, i - 1, A, B);
	Quick_Sort_1(i + 1, right, A, B);
}


int main()
{
	int n;
	double V[1000], Weight[1000], A[1000], C, sum = 0, Goods = 0;
	scanf("%d%lf", &n, &C);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf%lf", &Weight[i], &V[i]);
		A[i] = V[i] / Weight[i];
	}
	Quick_Sort_1(0, n - 1, A, Weight);
	for (int i = 0; i < n; i++)
	{
		sum += Weight[i];
		if (sum < C)
			Goods++;
		else if (sum = C)
		{
			Goods++;
			break;
		}
		else
		{
			Goods += 1 - (sum - C) / Weight[i];
			break;
		}
	}
	printf("%.1lf\n", Goods);
	return 0;
}