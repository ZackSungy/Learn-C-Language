#include<stdio.h>
int main()
{
	float a;
	do
	{
		printf("���������\n");
		scanf("%f", &a);
	} while (0 > a || 100 < a);
	if (90 <= a)
		printf("��ĵȼ�Ϊ��A");
	else
		(a < 60 ? printf("��ĵȼ�Ϊ��C") : printf("��ĵȼ�Ϊ��B"));
	return 0;
}