#include<stdio.h>
int main()
{
	int i = 0, x, y, z, k = 0, b = 1, num1 = 0, num2 = 0, j = 0;
	char s[100], m;
	for (i = 0;; i++)
	{
		scanf("%c", &s[i]);
		k++;
		if (s[i] == '\n')
			break;
	}
	for (i = 0; i < k; i++)
	{
		{
			if ('0' <= s[i] && s[i] <= '9')
			{
				x = i;
				y = i;
			}
			while ('0' <= s[i] && s[i] <= '9' && ('0' <= s[i + 1] && s[i + 1] <= '9'))
			{
				j++;
				i++;
				y = i;
			}
			for (x; x <= y; x++)
			{
				for (z = 0; z < j; z++)
				{
					b *= 10;
				}
				b = b*(s[x] - 48);
				num1 += b;
				b = 1;
				j--;
			}
		}
		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
		{
			m = s[i];
			i = i;
		}
		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
			break;
	}
	i++;
	for (i; i < k; i++)
	{
		{
			if ('0' <= s[i] && s[i] <= '9')
			{
				x = i;
				y = i;
			}
			while ('0' <= s[i] && s[i] <= '9' && ('0' <= s[i + 1] && s[i + 1] <= '9'))
			{
				j++;
				i++;
				y = i;
			}
			for (x; x <= y; x++)
			{
				for (z = 0; z <= j; z++)
				{
					b *= 10;
				}
				b = b*(s[x] - 48);
				num2 += b;
				b = 1;
				j--;
			}
		}
	}
	if (m == '+')
		printf("%d\n", num1 + num2);
	else if (m == '-')
		printf("%d\n", num1 - num2);
	else if (m == '*')
		printf("%d\n", num1 * num2);
	else if (m == '/')
		printf("%d\n", num1 / num2);
	return 0;

}
