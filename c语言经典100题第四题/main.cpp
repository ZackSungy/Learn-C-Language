#include<stdio.h>
int main()
{
	int year, moon, day, time, i, x = 0, j;
	printf("�����������գ�");
	scanf("%d%d%d", &year, &moon, &day);
	if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
		i = 29;
	else
		i = 28;
	for (j = 1; j <= moon; j++)
	{
		if (j == 5 || j == 7 || j == 10 || j == 12)
		{
			x++;
		}
	}
	if (moon == 1 || moon == 2)
	{
		time = day + (moon - 1) * 31;
	}
	else
	{
		time = 31 * (moon - 1) + i - x;
	}
	printf("%d��%d��%d���Ǹ����%d��", year, moon, day, time);
	return 0;
}