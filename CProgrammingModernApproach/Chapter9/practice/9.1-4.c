#include <stdio.h>

int day_of_year(int,int,int);

int main()
{
	int month,year,day;

	printf("Enter month-day-year: ");
	scanf("%d-%d-%d",&month,&day,&year);

	printf("This day is %d day of the year\n",day_of_year(month,day,year));
	return 0;
}

int day_of_year(int month,int day,int year)
{
	int i,day_count=0;
	int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};

	if(year%4==0 && year%100!=0 || year%400==0)
		mon[1]++;
	for(i=0;i<month;i++)
		day_count+=mon[i];

	return day_count+day;
}
