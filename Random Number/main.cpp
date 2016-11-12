#include<stdio.h>
#include<stdlib.h>//rand() and srand need
#include<time.h>//time()need
int n = 100, m = 100000;
double random()//Generate [0,1] uniformity random number 
{
	return (double)rand() / RAND_MAX;
}

int random(int m)//Generate [0,m-1] uniformity random number
{
	return (int)(random()*(m - 1) + 0.5);
}
int main()
{
	srand(time(NULL));//initial random number
	printf("%d %d\n", n, m);
	for (int i = 0; i < m; i++)
	{
		if (rand() & 2 == 0)
			printf("A");
		else
			printf("B");
		int X, Y;
		for (;;)
		{
			X = random(n) + 1;
			Y = random(n) + 1;
			if (X != Y)
				break;
		}
		printf(" %d %d\n", X, Y);
	}
	return 0;
}