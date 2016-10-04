#include<stdio.h>
int main()
{
	int x, y, z, result;
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5; y++)
		{
			for (z = 1; z < 5; z++)
			{
				result = x * 100 + y * 10 + z;
				printf("%d", result);
				printf("\n");
			}
		}
	}
	return 0;
}

