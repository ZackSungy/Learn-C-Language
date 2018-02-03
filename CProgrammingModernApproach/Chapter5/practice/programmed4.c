#include <stdio.h>

int main()
{
	float speed;

	printf("Enter speed of wind: ");
	scanf("%f",&speed);

	if(speed<0.0f)
		printf("Input error\n");
	else if (speed < 1.0f)
		printf("Calm\n");
	else if(speed < 4.0f)
		printf("Light air\n");
	else if (speed < 28.0f)
		printf("Breeze\n");
	else if(speed < 48.0)
		printf("Gale\n");
	else if (speed <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");
	return 0;
}
