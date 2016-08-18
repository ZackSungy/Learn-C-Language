#include<stdio.h>
#define N 7
int main()
{
	int a[] = { 45, 67, 12, -88, -1, 78, 100 };
	int *p = a, *q = p, *r = p;
	int i;
	while (p <= &a[N - 1])
	{
		if (*p < *r)
		{
			printf("%6d,%6d", *p, *r);
			r = p;

			printf("\n");
		}
		else if (*p>*q)
			q = p;
		p++;
	}
	for (i = 0; i < N; i++)
		printf("%6d", a[i]);
	printf("\n");
	printf("最大值%d是数组的第%d个元素\n", *q, q - a + 1);
	printf("最小值%d是数组的第%d个元素\n", *r, r - a + 1);
	return 0;

}
