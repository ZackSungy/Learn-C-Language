#include<stdio.h>
#include<math.h>
int main()
{
	int x1, x2, y1, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	double dis;
	dis = (x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2);
	dis = sqrt(dis);
	printf("%.5lf", dis);
	return 0;
}