#include<stdio.h>

int f(int a, int b)
{
	int r;
	while (0 < b)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int fun(int a, int b)
{
	int i, j;
	for (i = 1;; i++)
	{
		int k = 0;
		for (j = 1;; j++)
		{
			if (i*a == j*b)
				k = 1;
			if (k)
				break;
			if (i*a < j*b)
				break;
		}
		if (k)
			break;
	}
	return i*a;
}


int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d\n%d\n", f(n, m), fun(n, m));
	return 0;
}