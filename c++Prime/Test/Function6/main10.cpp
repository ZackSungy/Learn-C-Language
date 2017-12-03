#include <iostream>
using namespace std;
using arrT=int[10];

arrT* func(int i)
{
	arrT a;
	for(int item=0;item<i;item++)
		a[item]=item+1;
	return a;
}

int main()
{
	arr s=func(10);
	for(int i=0;i<10;i++)
		cout<<item[i]<<" ";
	cout<<endl;
	return 0;
}
