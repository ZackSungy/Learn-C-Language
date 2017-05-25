#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;

int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	int y = 1777, m = 4, d = 30, n;
	scanf("%d", &n);
	while (n >= 366)
	{
		if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
			n -= 366;
		else
			n -= 365;
		y++;
	}
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
		mon[1] = 29;
	else
		mon[1] = 28;
	for (int i = 1; i<n; i++)
	{
		d++;
		if (d>mon[m - 1])
		{
			m++;
			d = 1;
		}
		if (m>12)
		{
			y++;
			if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
				mon[1] = 29;
			else
				mon[1] = 28;
			m = 1;
		}
	}
	printf("%d %d %d", y, m, d);
	return 0;
}