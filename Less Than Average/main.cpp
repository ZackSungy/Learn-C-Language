#include<stdio.h>
int main()
{
	int i, a[500], n = 0, ave = 0, s = 0;
	for (i = 0;; i++)
	{
		scanf("%d", &a[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
		ave += a[i];
	ave = ave / n;
	for (i = 0; i < n; i++)
	{
		if (a[i] <= ave)
			printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}