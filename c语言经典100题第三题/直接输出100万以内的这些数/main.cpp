#include<stdio.h>
#include<math.h>
int main()
{
	double i, y, z;
	double x = 0;
	for (i = 0; i < 1000000; i++)
	{
		x = i + 100;
		for (y = 0; y < x; y++)
		{
			z = sqrt(x);
			if (z == y)
			{
				x = x + 168;
				for (y = 0; y< x; y++)
				{
					z = sqrt(x);
					if (z == y&&x<1000268)
						printf("%lf\n", x - 268);
				}
			}
		}
	}
	return 0;
}