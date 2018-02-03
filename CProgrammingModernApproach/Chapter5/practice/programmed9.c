#include <stdio.h>

int main()
{
	int year1,year2,month1,month2,day1,day2;

	printf("Enter first date(mm/dd/yy):");
	scanf("%d/%d/%d",&month1,&day1,&year1);

	printf("Enter second date(mm/dd/yy):");
	scanf("%d/%d/%d",&month2,&day2,&year2);

	if(year1<year2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month1,day1,year1,month2,day2,year2);
	else if(year1==year2 && month1<month2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month1,day1,year1,month2,day2,year2);
	else if(year1==year2 && month1==month2 && day1<day2)
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month1,day1,year1,month2,day2,year2);
	else if(year1==year2 && month1==month2 && day1==day2)
		printf("Tow date is same\n");
	else
		printf("%d/%d/%02d is earlier than %d/%d/%02d\n",month2,day2,year2,month1,day1,year1);
}
