#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	int grade;
	cin >> grade;
	cout << ((grade >= 90) ? "hight pass" : (grade >= 75) ? "low pass" : (grade < 60) ? "fail" : "pass") << endl;
	return 0;
}