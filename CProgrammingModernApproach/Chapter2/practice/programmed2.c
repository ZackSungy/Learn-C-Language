#include <stdio.h>
#define PI 3.14159f
#define SCALE (4.0f/3.0f)

int main()
{
	float radius=10.0f;
	
	printf("%f\n",radius*radius*radius*PI*SCALE);
	return 0;
}
