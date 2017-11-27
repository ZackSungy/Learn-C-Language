#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

void print(const int*beg,const int *end)
{
	while(beg!=end){
		cout<<*beg++<<endl;
	}
}

int main()
{
	int j[4]={3,19,53,10};
	print(begin(j),end(j));
	return 0;
}
