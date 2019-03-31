#include <stdio.h>
#include<stdlib.h>

#define N 8 //Schedule

void find_closest_flight(int desired_time,int *departure,int *arrival_time);

int main()
{
	int hour,min,dp,at;

	printf("Enter the 24 hour clock like (13:59):");

	scanf("%2d:%2d",&hour,&min);
	if(hour < 0 || hour >=24 || min <0 || min>=60)//input error
		exit(0);

	find_closest_flight(60*hour+min,&dp,&at);

	printf("Closest departure time is %d:%02d %c.m,arriving at %d:%02d %c.m\n",dp/60%12==0?12:dp/60%12,dp%60,dp/60>12?'p':'a',at/60%12==0?12:at/60%12,at%60,at/60>12?'p':'a');

	return 0;
}


void find_closest_flight(int desired_time,int *departure,int *arrival_time)
{
	int i=0;
	int dp[N]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45};//Aircrafe depature schedule.
	int at[N]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*6+20,23*60+58};//Aircrafe arrival schedule.

	while(dp[i]<desired_time&&i<N){
		printf("1");
		i++;
	}


	if(i==0){
		*departure=dp[i];
		*arrival_time=at[i];
	}
	else if(i==N){
		*departure=dp[i-1];
		*arrival_time=at[i-1];
	}
	else if(-(dp[i-1]-desired_time)<dp[i]-desired_time){
		*departure=dp[i-1];
		*arrival_time=at[i-1];
	}
	else{
		*departure=dp[i];
		*arrival_time=at[i];
	}
}
