#include <stdio.h>
#include <ctype.h>
int main()
{
	int clock,min,time[]={60*8,60*9+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45,60*8},abs1,abs2,time2[]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58,10*60+16};
	char ch;

	printf("Enter a 12-hour time(AM/PM): ");
	scanf("%d:%d %c",&clock,&min,&ch);

	if(toupper(ch)=='P')
		clock+=12;

	if(clock > 24 || clock < 0 || 	min >59 || min < 0)
	{
		printf("Input error\n");
		return -1;
	}
	
	int sum=clock*60+min;

	for(int i=0;i<8;i++)
	if(time[i]>=sum)
	{
		
		abs1=time[i]-sum>0?time[i]-sum:-(time[i]-sum);
		abs2=time[i-1]-sum>0?time[i-1]-sum:-(time[i-1]-sum);
		if(abs1<=abs2)
			printf("Closest departure time is %d:%02d %c.m.,arriving at %d:%02d %c.m.\n",time[i]/60>12?time[i]/60-12:time[i]/60,time[i]%60,time[i]/60>12?'p':'a',time2[i]/60>12?time2[i]/60-12:time2[i]/60,time2[i]%60,time2[i]/60>12?'p':'a');
		else
			printf("Closest departure time is %d:%02d %c.m.,arriving at %d:%02d %c.m.\n",time[i-1]/60>12?time[i-1]/60-12:time[i-1]/60,time[i-1]%60,time[i-1]/60>12?'p':'a',time2[i-1]/60>12?time2[i-1]/60-12:time2[i-1]/60,time2[i-1]%60,time2[i-1]/60>12?'p':'a');
		break;
	}
}
