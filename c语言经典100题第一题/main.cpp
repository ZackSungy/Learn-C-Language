#include<stdio.h>
int main()
{
	int x, y, z, result, i = 0;
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5; y++)
		{
			for (z = 1; z < 5; z++, i++)
			{
				result = x * 100 + y * 10 + z;
				printf("%d", result);
				printf("\n");
			}
		}
	}
	printf("共进行%d次", i);
	return 0;
}

