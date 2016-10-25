#include<stdio.h>
int main()
{
	char s[500];
	int i, j = 0, k = 0, x = 0, y = 0, z = 0, m = 0, a, b = 1, sum = 0, product = 1;
	for (i = 0;; i++)
	{
		scanf("%c", &s[i]);
		m++;
		if (s[i] == '\n')
			break;
	}
	for (i = 0; i < m; i++)
	{
		if (('0' <= s[i] && s[i] <= '9'))
		{
			x = i;
			y = i + 1;
			while ((('0' <= s[i] && s[i] <= '9')) && (('0' <= s[i + 1] && s[i + 1] <= '9')))
			{
				k++;
				i++;
				y = i + 1;
			}
		}
		if (('0' <= s[i] && s[i] <= '9'))
		{
			k++;
			for (x; x < y; x++)
			{
				for (z = 1; z < k; z++)
				{
					b *= 10;
				}
				b = (s[x] - 48) * b;
				sum += b;
				b = 1;
				k--;
				if (k == 0)
					product *= sum;
			}
		}
		sum = 0;
	}
	printf("%03d\n", product % 1000);
	return 0;
}
