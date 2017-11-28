#include <iostream>
using namespace std;

void Sum(initializer_list<int> list)
{
	int sum=0;
	for(auto &i:list)
		sum+=i;
	cout<<sum<<endl;
}

int main()
{
	initializer_list<int> arr={2,4,6,1,7,7};
	Sum(arr);
	return 0;
}
