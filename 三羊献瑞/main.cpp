#include<stdio.h>
int main()
{
	int a, b, c, d, e, f, g, h, x, y, z;
	for (a = 1; a <= 9; a++)
	for (b = 0; b <= 9; b++)
	for (c = 0; c <= 9; c++)
	for (d = 0; d <= 9; d++)
	for (e = 1; e <= 9; e++)
	for (f = 0; f <= 9; f++)
	for (g = 0; g <= 9; g++)
	for (h = 0; h <= 9; h++)
	if (a != b&&a != c&&a != d&&a != e&&a != f&&a != g&&a != h&&b != c&&b != d&&b != e&&b != f&&b != g&&b != h
		&&c != d&&c != f&&c != e&&c != g&&c != h&&d != e&&d != f&&d != g&&d != h
		&&e != f&&e != g&&e != h&&f != g&&f != h&&g != h)
	{
		x = a * 1000 + b * 100 + c * 10 + d;
		y = e * 1000 + f * 100 + g * 10 + b;
		z = e * 10000 + f * 1000 + c * 100 + b * 10 + h;
		if ((x + y) == z)
		{
			printf("%6d\n", x);
			printf("+ ");
			printf("%d\n", y);
			printf("______\n");
			printf("%6d\n", z);
		}
	}
	return 0;
}