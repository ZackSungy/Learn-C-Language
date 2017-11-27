#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int ia[],size_t size)
{
	for(size_t i=0;i!=size;i++){
		cout<<ia[i]<<endl;
	}
}

int main()
{
	int j[4]={3,19,53,10};
	print(j,end(j)-begin(j));
	return 0;
}
