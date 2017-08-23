#include<iostream>
#include<string>
#include"mySales_data.h"
using namespace std;
int main()
{
	double price;
	Sales_data data1, data2;
	cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold*price;
	cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold*price;
	if (data1.bookNo == data2.bookNo)
	{
		cout << data1.bookNo << " " << data1.units_sold + data2.units_sold << " " <<
			(data1.revenue + data2.revenue) / (data1.units_sold + data2.units_sold) << " "
			<< data1.revenue + data2.revenue << endl;
	}
	return 0;
}