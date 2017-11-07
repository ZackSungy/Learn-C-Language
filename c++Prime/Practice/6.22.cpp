#include <iostream>

using namespace std;

void Swap(int *num1,int *num2)
{
	int t=*num1;
	*num1=*num2;
	*num2=t;
}

int main()
{
	int num1=10,num2=20;
	Swap(&num1,&num2);
	cout<<num1<<" "<<num2<<endl;
	return 0;
}
