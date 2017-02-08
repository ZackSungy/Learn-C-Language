#include<stdio.h>


void Quick_Sort_1(int left, int right, double *A, double*B)
{
	if (left > right)
		return;
	int i = left;
	int j = right;
	double key = A[i], key2 = B[i];
	while (i < j)
	{
		while (A[j] >= key&&i < j)j--;
		A[i] = A[j];
		B[i] = B[j];
		while (A[i] <= key&&i < j)i++;
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
	int n, sum = 1, j = 0;
	double A[1000], B[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%lf%lf", &A[i], &B[i]);
	Quick_Sort_1(0, n - 1, B, A);
	for (int i = 0; i < n; i++)
	{
		if (B[j] <= A[i])
		{
			sum++;
			j = i;
		}
	}
	printf("%d\n", sum);
	return 0;
}