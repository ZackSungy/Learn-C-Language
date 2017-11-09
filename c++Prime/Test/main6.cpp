#include <iostream>

using namespace std;

int main()
{
	initializer_list<int> li={3,6,1,7,8};
	for(const auto &i:li)
		cout<<i<<endl;
	return 0;
}
