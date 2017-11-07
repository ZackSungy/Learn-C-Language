#include<iostream>
using namespace std;

int main()
{
	int item;
	while (cin >> item)
	{
		if (item == 42)
		{
			cout << endl;
			break;
		}
		cout << item << " ";
	}
	return 0;
}