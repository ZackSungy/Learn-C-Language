#include<stdio.h>
int f(int a)
{
	int n, sum = 0;
	for (n = 0; n <= a; a--)
	{
		sum += a;
	}
	return sum;
}
int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		int k = 1, s = 0;
		for (;;)
		{
			s += k;
			if (s >= n)
			{
				printf("%d\n", k);
				if ((k - 1) % 2 == 1)
					printf("%d/%d", n - f(k - 1), k + 1 - (n - f(k - 1)));
				else
					printf("%d/%d", k + 1 - (n - f(k - 1)), n - f(k - 1));
				break;
			}
			k++;
		}
	}
	return 0;
}