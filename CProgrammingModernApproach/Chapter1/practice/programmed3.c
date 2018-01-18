#include <stdio.h>
#define PI 3.14159f
#define SCALE (4.0f/3.0f)

int main()
{
	float radius;
	
	scanf("%f",&radius);

	printf("%f\n",radius*radius*radius*PI*SCALE);
	return 0;
}
