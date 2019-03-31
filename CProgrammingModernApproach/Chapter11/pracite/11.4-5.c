#include<stdio.h>
#include<stdlib.h>

void split_time(long total_time,int *hr,int *min,int *sec);

int main()
{
	long time;
	int hr,min,sec;

	scanf("%ld",&time);
	
	split_time(time,&hr,&min,&sec);

	printf("The time is %02d:%02d:%02d\n",hr,min,sec);

	return 0;
}

void split_time(long total_time,int *hr,int *min,int *sec)
{
	if(total_time>86400||total_time<0){
		printf("input error!\n");
		exit(0);
	}
	*hr=total_time/3600;
	*hr%=24;
	total_time%=3600;
	*min=total_time/60;
	total_time%=60;
	*sec=total_time;
}
