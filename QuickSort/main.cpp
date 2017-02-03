#include <stdio.h>  
int i, j, c;

void quick_sort(int left, int right, int *A)
{
	if (left >= right)
		return;
	int i = left, j = right;
	int key = A[left];
	while (i < j)
	{
		while (i < j&&key <= A[j])
			j--;
		A[i] = A[j];
		while (i < j&&key >= A[i])
			i++;
		A[j] = A[i];
		c++;
	}
	A[i] = key;
	quick_sort(left, i - 1, A);
	quick_sort(i + 1, right, A);
}


int main()
{
	int A[100], n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	quick_sort(0, n - 1, A);
	for (int i = 0; i < n; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}