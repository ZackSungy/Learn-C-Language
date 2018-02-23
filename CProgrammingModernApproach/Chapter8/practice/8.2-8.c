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
		int avg=0;
		for(j=0;j<HOURS;j++){
			avg+=temperature_readings[i][j];
		}
		avg/=HOURS;
		printf("%d\n",avg);
	}
	return 0;
}
