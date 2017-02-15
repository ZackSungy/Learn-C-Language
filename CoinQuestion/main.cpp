#include<stdio.h>

int main()
{
	int n, S, V[100];
	scanf("%d%d", &n, &S);
	int min = 0, max = 0, i = n - 1, S1 = S;
	for (int i = 0; i < n; i++)
		scanf("%d", &V[i]);
	while (S>0)
	{
		if (S >= V[i])
		{
			min += S / V[i];
			S = S%V[i];
			i--;
		}
		else
		{
			S += V[i + 1];
			min--;
		}
	}
	i = 0;
	while (S1 > 0)
	{
		if (S1 >= V[i])
		{
			max += S1 / V[i];
			S1 = S1%V[i];
			i++;
		}
		else
		{
			S1 += V[i - 1];
			max--;
		}
	}
	printf("%d\n", min);
	printf("%d\n", max);
	return 0;
}