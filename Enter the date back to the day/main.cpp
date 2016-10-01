#include<stdio.h>
int main()
{
	int a = 31, b = 30, c = 29, d = 28;
	int year, moon, date, day;
	printf("请输入年：\n");
	scanf("%d", &year);
	printf("请输入月：\n");
	scanf("%d", &moon);
	printf("请输入日：\n");
	scanf("%d", &date);
	if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
	{
		if (moon == 1)
			day = date;
		else if (moon == 2)
			day = date + a;
		else if (moon == 3)
			day = date + a + c;
		else if (moon == 4)
			day = date + a + c + a;
		else if (moon == 5)
			day = date + a + c + a + b;
		else if (moon == 6)
			day = date + a + c + a + b + a;
		else if (moon == 7)
			day = date + a + c + a + b + a + b;
		else if (moon == 8)
			day = date + a + c + a + b + a + b + a;
		else if (moon == 9)
			day = date + a + c + a + b + a + b + a + a;
		else if (moon == 10)
			day = date + a + c + a + b + a + b + a + a + b;
		else if (moon == 11)
			day = date + a + c + a + b + a + b + a + a + b + a;
		else if (moon == 12)
			day = date + a + c + a + b + a + b + a + a + b + a + b;
	}
	else
	{
		if (moon == 1)
			day = date;
		else if (moon == 2)
			day = date + a;
		else if (moon == 3)
			day = date + a + d;
		else if (moon == 4)
			day = date + a + d + a;
		else if (moon == 5)
			day = date + a + d + a + b;
		else if (moon == 6)
			day = date + a + d + a + b + a;
		else if (moon == 7)
			day = date + a + d + a + b + a + b;
		else if (moon == 8)
			day = date + a + d + a + b + a + b + a;
		else if (moon == 9)
			day = date + a + d + a + b + a + b + a + a;
		else if (moon == 10)
			day = date + a + d + a + b + a + b + a + a + b;
		else if (moon == 11)
			day = date + a + d + a + b + a + b + a + a + b + a;
		else if (moon == 12)
			day = date + a + d + a + b + a + b + a + a + b + a + b;
	}
	printf("第%d年%d月%d日是第%d日", year, moon, date, day);
	return 0;
}