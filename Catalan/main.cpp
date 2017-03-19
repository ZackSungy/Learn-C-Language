#include<stdio.h>  
#include<string.h>  
#include<math.h>  

int catalan(int n)
{
	if (n == 3)
		return 1;
	int b = 0;
	b += catalan(n - 1)*(4 * (n - 1) - 6) / (n - 1);
	return b;
}

int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		if (n<3)continue;
		printf("%d\n", catalan(n));
	}
	return 0;
}