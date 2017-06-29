#include<iostream>
using namespace std;

class Date {
	int year, month, day;
	int mon[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
public:
	void set(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	friend Date operator++(Date&a, int);
	friend ostream& operator<<(ostream& o, const Date &d)
	{
		return o << d.day << "ÈÕ" << d.month << "ÔÂ" << d.year << "Äê" << endl;
	}
};

Date operator++(Date&a, int)
{
	if (a.year % 400 == 0 || a.year % 4 == 0 && a.year % 100 != 0)
		a.mon[1] = 29;
	else
		a.mon[1] = 28;
	if (!(a.day = (a.day) % (a.mon[a.month - 1])) && !(a.month = (a.month + 1) % 12))
		a.year++;
	a.day++;
	return a;
}

int main()
{
	Date a;
	a.set(1997, 2, 27);
	cout << a++;
	cout << a++;
	return 0;
}