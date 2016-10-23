#include<stdio.h>
int main()
{
	int i, n = 0;
	float s[110];
	for (i = 0; i < 101; i++)
	{
		scanf("%f", &s[i]);
		n++;
		if (getchar() == '\n')
			break;
	}
	for (i = 0; i < n; i++)
	{
		if (0 <= s[i] && s[i] <= 100)
			printf("%.2f ", s[i]);
	}
	printf("\n");
	return 0;
}
