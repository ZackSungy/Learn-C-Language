#include <iostream>
#include "Calculator2.cpp"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	while (1)
	{
		OpertationFactory sys1;
		char sign;
		double num1, num2;
		int key = 0;
		cout << ">";
		cin >> num1 >> sign >> num2;
		while (!cin){
			cin.clear();
			cin.ignore();
			key = 1;
		}
		if (key){
			cin.sync();
			cout << ">no this chioce,please input again." << endl;
			continue;
		}
		sys1.GetResult(sign, num1, num2);
	}
	return 0;
}