#include <iostream>

using namespace std;

void print(const int ia[10],size_t size)
{
	for(size_t i=0;i!=size;++i)
		cout<<ia[i]<<endl;
}

int main()
{
	int ia[]={3,1,2,4,5,6};
	print(ia,end(ia)-begin(ia));
	return 0;
}
