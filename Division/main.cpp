#include<stdio.h>
int main()
{
	int n, i, j, x, y;
	scanf("%d", &n);
	for (i = 1234; i*n<98765; i++)
	{
		int sum = 0, s = 1;
		x = i;
		y = i*n;
		for (j = 0; j < 5; j++)
		{
			sum = sum + x % 10 + y % 10;
			if (x % 10)
				s = s*(x % 10);
			if (y % 10)
				s = s*(y % 10);
			x /= 10;
			y /= 10;
		}
		if (sum == 45 && s == 362880)
		{
			printf("%05d/%05d=%d\n", i*n, i, n);
		}
	}
	return 0;
}
