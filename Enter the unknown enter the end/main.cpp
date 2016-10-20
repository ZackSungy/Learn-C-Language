#include<stdio.h>
int main()
{
	int i, n = 0, a[999];
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}