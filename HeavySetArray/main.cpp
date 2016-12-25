
#include<stdio.h>


void f(int n, int *P, int *A, int cur)
{
	int i, j;
	if (cur == n)
	{
		for (i = 0; i < n; i++)
			printf("%d ", A[i]);
		printf("\n");
	}
	else
	for (i = 0; i < n; i++)
	if (!i || P[i] != P[i - 1])
	{
		int c1 = 0, c2 = 0;
		for (j = 0; j < cur; j++)
		if (A[j] == P[i])
			c1++;
		for (j = 0; j < n; j++)
		if (P[j] == P[i])
			c2++;
		if (c1 < c2)
		{
			A[cur] = P[i];
			f(n, P, A, cur + 1);
		}
	}
}


int main()

{
	int i, P[1000], s[1000];
	for (i = 0;; i++)
	{
		scanf("%d", &P[i]);
		if (getchar() == '\n')
			break;
	}
	f(i + 1, P, s, 0);
	return 0;
}