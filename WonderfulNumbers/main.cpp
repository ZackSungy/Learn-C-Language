#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 1;; i++)
	{
		int  sum = 0, s = 1, a = 1;
		k = j = i;
		k = k*k;
		j = j*j*j;
		for (k; 0 < k; k /= 10)
		if (k % 10)
		{
			sum = sum + (k % 10);
			s = s*(k % 10);
		}
		else
		{
			a = k % 10;
		}
		for (j; 0 < j; j /= 10)
		if (j % 10)
		{
			sum = sum + (j % 10);
			s = s*(j % 10);
		}
		else
		{
			a = j % 10;
		}
		if ((sum + a) == 45 && s == 362880 && !a)
		{
			printf("%d", i);
			break;
		}
	}
}