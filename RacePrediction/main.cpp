#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
	int v1, v2, t, s, l, tu = 0, ra = 0, time = 0;
	scanf("%d%d%d%d%d", &v1, &v2, &t, &s, &l);
	while (tu<l&&ra<l)
	{
		time++;
		ra += v1;
		tu += v2;
		if (tu >= l || ra >= l)break;
		if (ra - tu >= t)
		{
			tu += v2*s;
			time += s;
		}
	}
	if (tu == l&&ra == l)
	{
		printf("D");
		printf("\n%d", time);
	}
	else if (ra<tu)
	{
		printf("T");
		printf("\n%d", l / v2);
	}
	else
	{
		printf("R");
		printf("\n%d", time);
	}
	return 0;
}