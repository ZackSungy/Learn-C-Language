#ifndef SALES_DATA
#define SALES_DATA

#include<string>
using namespace std;

struct Sales_data{
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0;
};

#endif
