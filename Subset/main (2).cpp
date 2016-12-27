#include<stdio.h>


void f(int n, int *B, int cur)
{
	if (cur == n)
	{
		for (int i = 1; i <= cur; i++)
		if (B[i])printf("%d ", i);
		printf("\n");
		return;
	}
	B[cur] = 1;
	f(n, B, cur + 1);
	B[cur] = 0;
	f(n, B, cur + 1);
}


int main()
{
	int n, a[10];
	scanf("%d", &n);
	f(n, a, 0);
	return 0;
}