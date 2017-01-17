#include<stdio.h>
int main()
{
	int i, j, k;
	for (i = 12345; i <= 98765; i++)
	for (j = 2; j <= 8; j++)
	{
		k = i*j;
		if (i*j >= 98765)
			break;
		if (i % 10 == k / 10000 && (i / 10) % 10 == (k / 1000) % 10 && (i / 100) % 10 == (k / 100) % 10 && (k / 10) % 10 == (i / 1000) % 10 && k % 10 == i / 10000)
		{
			printf("%d  ", i);
			printf("%d  ", j);
		}
	}
	return 0;
}