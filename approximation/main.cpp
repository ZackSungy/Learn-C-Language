#include<stdio.h>
int main()
{
	double j, pi = 0, m;
	int i;
	for (i = 0; 0 <= i; i++)
	{
		j = i * 2 + 1;
		if ((i + 1) % 2 == 0)
		{
			j = -j;
		}
		m = 1 / j;
		pi += m;
		if (m < 0)
			m = -m;
		if (m < 0.000001)
			break;
	}
	printf("%lf\n", pi);
	return 0;
}