#include<stdio.h>

int n, m, Maximum, A[1000];

int Judge(int Maximum, int *A)
{
	int sum = 0;
	int pa = 0;
	for (int i = 0; i < n; i++)
	{
		sum += A[i];
		if (sum>Maximum)
		{
			sum = A[i];
			pa++;
		}
	}
	if (pa >= m)
		return 0;
	else
		return 1;
}

int Half_Stack(int low, int hige, int *A)
{
	if (low >= hige)
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
	if (a>max)
		printf("%d", a);
	else
		printf("%d", max);
	return 0;
}