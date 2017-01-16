#include<stdio.h>
int main()
{
	int i, j = 10, count = 0;
	for (i = 1; i <= 10000; i++)
	{
		if (i >= j)
			j *= 10;
		if (((((i*i) % 10000)*i) % j) == i)
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d\n", count);
}