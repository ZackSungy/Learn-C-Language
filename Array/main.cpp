#include<stdio.h>

void f(int n, int *A, int cur)
{
	int i, j;
	if (cur == n)
	{
		for (i = 0; i < n; i++)
			printf("%d ", A[i]);
		printf("\n");
	}
	else
	for (i = 1; i <= n; i++)
	{
		int ok = 1;
		for (j = 0; j < cur; j++)
		if (A[j] == i)
			ok = 0;
		if (ok)
		{
			A[cur] = i;
			f(n, A, cur + 1);
		}
	}
}

int main()

{
	int t, x, i, j, s[1000];
	scanf("%d", &x);
	for (j = 0; j < x; j++)
	{
		for (i = 0; i < x; i++)
			s[i] = 1 + i;
		t = s[0];
		s[0] = s[j];
		s[j] = t;
		f(x, s, 1);
	}
	return 0;
}