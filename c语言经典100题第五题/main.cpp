#include<stdio.h>
int main()
{
	int a[3], i, j, x;
	printf("����x��y��z��ֵ��");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 3 - 1 - j; i++)
		if (a[i]>a[i + 1])
		{
			x = a[i];
			a[i] = a[i + 1];
			a[i + 1] = x;
		}
	}
	printf("��С���������");
	for (i = 0; i < 3; i++)
	{
		printf("%d  ", a[i]);
	}
	return 0;
}