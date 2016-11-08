#include<stdio.h>
int main()
{
	int dragon, hero, i, j, t, sum = 0, k = 1, a = 0, x;
	scanf("%d%d", &dragon, &hero);
	int diameter[100], tell[100];
	for (i = 0; i < dragon; i++)
	{
		scanf("%d", &diameter[i]);
	}
	for (j = 0; j < hero; j++)
	{
		scanf("%d", &tell[j]);
	}
	for (i = 0; i < dragon; i++)
	{
		for (j = 0; j < dragon - i - 1; j++)
		{
			if (diameter[j]>diameter[j + 1])
			{
				t = diameter[j];
				diameter[j] = diameter[j + 1];
				diameter[j + 1] = t;
			}
		}
	}
	for (i = 0; i < hero; i++)
	{
		for (j = 0; j < hero - i - 1; j++)
		{
			if (tell[j]>tell[j + 1])
			{
				t = tell[j];
				tell[j] = tell[j + 1];
				tell[j + 1] = t;
			}
		}
	}
	for (j = 0; j < dragon; j++)
	{
		for (i = a; i < hero; i++)
		if (tell[i] >= diameter[j])
		{
			sum += tell[i];
			a = i + 1;
			break;
		}
	}
	for (j = dragon - 1, x = 0; 0 <= j; j--, x++)
	{
		for (i = hero - 1 - x; 0 <= i; i--)
		if ((dragon > hero) || (tell[i] < diameter[j]))
		{
			k = 0;
			break;
		}
	}
	if (k)
		printf("%d\n", sum);
	else
		printf("bit is doomed!");
	return 0;
}
