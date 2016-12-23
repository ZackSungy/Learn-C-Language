#include<stdio.h>
int main()
{
	int k, x, y;
	scanf("%d", &k);
	for (y = 1; y <= 2 * k; y++)
	{
		for (x = 4 * k*k; y <= x; x--)
		{
			if (x*y == k*x + k*y)
			{
				printf("1/%d=1/%d+1/%d\n", k, x, y);
				break;
			}
		}
	}
	return 0;
}