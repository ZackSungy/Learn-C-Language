#include <stdio.h>

int main()
{
	int num,y,m,d;
	float price;

	printf("Enter item number:");
	scanf("%d",&num);

	printf("Enter item number:");
	scanf("%f",&price);

	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&m,&d,&y);

	printf("Item\t   Unit Price     Purchase Date\n");
	printf("%-11d$%9.2f     %02d/%02d/%04d\n",num,price,m,d,y);
	return 0;
}
