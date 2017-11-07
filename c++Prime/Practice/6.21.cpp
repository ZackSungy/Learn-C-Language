#include <iostream>

using namespace std;

int max(int num1,int *num2)
{
	return num1>*num2?num1:*num2;
}

int main()
{
	int num1;
	int num2;
	cin>>num1>>num2;
	cout<<max(num1,num2)<<endl;
	return 0;
}
