#include<iostream>
#include<string>
#include<vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	int grade;
	string lettegrade;
	const vector<string> scores = { "F", "D", "C", "B", "A", "A++" };
	cin >> grade;
	if (grade<60)
	{
		lettegrade = scores[0];
	}
	else
	{
		lettegrade = scores[(grade - 50) / 10];
		if (grade != 100)
		{
			if (grade % 10 > 7)
				lettegrade += "+";
			else if (grade % 10 < 3)
				lettegrade += "-";
		}
	}
	cout << lettegrade << endl;
	return 0;
}