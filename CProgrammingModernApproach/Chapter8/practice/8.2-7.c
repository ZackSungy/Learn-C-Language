#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MONTH 30
#define HOURS 24

int main()
{
	int temperature_readings[MONTH][HOURS],i,j;

	srand((unsigned) time(NULL));

	for(i=0;i<MONTH;i++){
		for(j=0;j<HOURS;j++){
			temperature_readings[i][j]=rand()%40;
		}
	}
	
	for(i=0;i<MONTH;i++){
		for(j=0;j<HOURS;j++){
			printf("%2d ",temperature_readings[i][j]);
		}
		printf("\n");
	}
	return 0;
}
