#include <stdio.h>

int main()
{
	int year1,year2,month1,month2,day1,day2,sign=1;


	while(1)
	{
		printf("Enter second date(mm/dd/yy):");
		scanf("%d/%d/%d",&month2,&day2,&year2);

		if(sign)
		{
			month1=month2;
			day1=day2;
			year1=year2;
			sign=0;
		}
		if(month2==0&&day2==0&&year2==0)
		{
			printf("%d/%d/%02d is the earliest date\n",month1,day1,year1);

			return 0;
		}
		else if(year1>year2)
			year1=year2,day1=day2,month1=month2;
		else if(year1==year2 && month1>month2)
			year1=year2,day1=day2,month1=month2;
		else if(year1==year2 && month1==month2 && day1>day2)
			year1=year2,day1=day2,month1=month2;
	}
}
