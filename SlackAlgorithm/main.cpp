
#include<stdio.h>
int main()
{
	int a, b, c, d, e, count = 0;
	for (a = 1; a <= 9; a++)
	for (b = 1; b <= 9; b++)
	for (c = 1; c <= 9; c++)
	for (d = 1; d <= 9; d++)
	for (e = 1; e <= 9; e++)
	{
		if ((a * 10 + b)*(c * 100 + d * 10 + e) == (a * 100 + d * 10 + b)*(c * 10 + e) && a != b&&a != c&&a != d&&a != e&&b != c&&b != d&&b != e&&c != d&&c != e&&d != e)
			count++;
	}
	printf("%d\n", count);
	return 0;
}