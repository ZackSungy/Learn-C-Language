#include<stdio.h>
int main()
{
	int i, result;
	printf("�������������(Ԫ)��");
	scanf("%d", &i);
	if (1000000 < i)
	{
		result = i + i*0.01;
	}
	else if (600000 < i&& i <= 1000000)
	{
		result = i + i*0.015;
	}
	else if (400000 < i&&i <= 600000)
	{
		result = i + i*0.03;
	}
	else if (200000 < i&&i <= 400000)
	{
		result = i + i*0.05;
	}
	else if (100000 < i&&i <= 200000)
	{
		result = i + i*0.075;
	}
	else if (i <= 100000)
	{
		result = i + i*0.1;
	}
	printf("��õ��Ľ�ǮΪ%dԪ", result);
	return 0;
}

