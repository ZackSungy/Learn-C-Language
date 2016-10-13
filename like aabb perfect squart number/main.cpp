#include<stdio.h>
int main()
{
	int x, n, hi, lo;
	for (x = 1;; x++)
	{
		n = x*x;
		if (n < 1000)
			continue;
		if (9999 < n)
			break;
		hi = n / 100;
		lo = n % 100;
		if (hi / 10 == hi % 10 && lo / 10 == lo % 10)
			printf("%d\n", n);
	}
	return 0;
}