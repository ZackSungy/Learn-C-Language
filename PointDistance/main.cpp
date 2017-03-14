#include<stdio.h>
#include<string.h>
#include<math.h>

void gcd(int a, int b, int &d, int &x, int &y)
{
	if (!b)
	{
		d = 1; x = 1; y = 0;
	}
	else
	{
		gcd(b, a%b, d, y, x);
		y -= x*(a / b);
	}
}


int main()
{
	int a, b, d = 0, x = 0, y = 0;
	scanf("%d%d", &a, &b);
	gcd(a, b, d, x, y);
	printf("%d %d", x, y);
	return 0;
}