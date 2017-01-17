#include<stdio.h>
int main()
{
	int n, m, i, j, k, x, y, z;
	scanf("%d%d", &n, &m);
	for (j = 0; j < ((m + 1) / 2); j++)
	{
		for (i = 0; i < j; i++)
			printf(" ");
		for (k = 0; k < n; k++)
			printf("*");
		for (x = 0; x < ((m - 1) - 2 * (n + j) + n); x++)
			printf(" ");
		if (((m - 1) - 2 * (n + j) + n) <= 0)
		for (k = 0 - ((m - 1) - 2 * (n + j) + n); k < n; k++)
			printf("*");
		else
		for (k = 0; k < n; k++)
			printf("*");
		for (i = 0; i < j; i++)
			printf(" ");
		printf("\n");
	}
	j--;
	for (j; 0<j; j--)
	{
		for (i = 1; i < j; i++)
			printf(" ");
		for (k = 0; k < n; k++)
			printf("*");
		for (x = 0; x < ((m - 1) - 2 * (n + j) + n + 2); x++)
			printf(" ");
		if (((m - 1) - 2 * (n + j) + n + 2) <= 0)
		for (k = 0 - ((m - 1) - 2 * (n + j) + n + 2); k < n; k++)
			printf("*");
		else
		for (k = 0; k < n; k++)
			printf("*");
		for (i = 0; i < j; i++)
			printf(" ");
		printf("\n");
	}
	return 0;
}