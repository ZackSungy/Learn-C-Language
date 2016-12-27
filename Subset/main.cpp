#include<stdio.h>


void f(int n, int *A, int cur)
{
	for (int i = 0; i < cur; i++)
	{
		printf("%d", A[i]);
	}
	printf("\n");
	int s = cur ? A[cur - 1] + 1 : 0;
	for (int i = s; i<n; i++)
	{
		A[cur] = i;
		f(n, A, cur + 1);
	}
}


int main()
{
	int n, a[10];
	scanf("%d", &n);
	f(n, a, 0);
	return 0;
}