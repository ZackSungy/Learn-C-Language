#include<stdio.h>

int main()
{
	int n, a, b, c;
	scanf("%d", &n);
	if (n>8)
	{
		a = n / 8;
		if (a * 8<n)
			a++;
		b = n / a;
		c = n - (b*a);
		for (int i = 0; i<a; i++)
		{
			if (c>0)
			{
				printf("%d", b + 1);
				c--;
			}
			else
				printf("%d", b);
		}
	}
	else
		printf("%d", n);
	return 0;
}