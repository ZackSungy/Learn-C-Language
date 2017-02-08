#include<stdio.h>

int n, m, Maximum, A[1000], c;

int Judge(int Maximum, int *A)
{
	int sum = 0;
	int pa = 0;
	int pa2 = 0, j = 0, k = 0, sum1 = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
		if (sum>Maximum)
		{
			sum = A[i];
			pa++;
			if (pa == m - 2)
				k = i;
			if (pa == m - 1)
				j = i;
		}
	}
	for (int i = j; i < n; i++)
	{
		sum1 += A[i];
		if (sum1>Maximum)
		{
			pa2++;
			break;
		}
	}
	if (pa == m - 1 && pa2 == 0)
	{
		int sum1 = 0, sum2 = 0;
		for (k; k <= j; k++)
			sum1 += A[k];
		for (j; j < n; j++)
			sum2 += A[j];
		c = sum1>sum2 ? sum2 : sum1;
	}
	if (pa >= m)
		return 0;
	else
		return 1;
}

int Half_Stack(int low, int hige, int *A)
{
	if (low > hige)
		return hige + 1;
	int mid = (low + hige) / 2;
	if (Judge(mid, A) == 1)
		return Half_Stack(low, mid - 1, A);
	else
		return Half_Stack(mid + 1, hige, A);
}

int main()
{
	int sum = 0, max = -1, min = 100000, a;
	scanf("%d%d", &n, &m);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
		sum += A[i];
		if (min>A[i])
			min = A[i];
		if (max < A[i])
			max = A[i];
	}
	a = Half_Stack(min, sum, A);
	if (max>a)
		a = max;
	if (c > a)
		printf("%d\n", c);
	else
		printf("%d\n", a);
	return 0;
}