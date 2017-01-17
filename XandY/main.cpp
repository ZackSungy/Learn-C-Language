#include<stdio.h>
int main()
{
	int x, y, i;
	scanf("%d%d", &x, &y);
	for (i = 1; i <= 12; i++)
	{
		if (i % 2 == 1)
			y -= x;
		if (i % 6 == 0)
			x = x * 2;
		if (i % 4 == 0)
			y = y * 2;
		if (y <= 0)
			break;
	}
	printf("%d", y);
	return 0;
}