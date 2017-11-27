#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int (&arr)[10])
{
	for(auto elem:arr)
		cout<<elem<<endl;
}

int main()
{
	int j[10]={1,2,3,4,5,6,7,8,9,10};
	print(j);
	return 0;
}
