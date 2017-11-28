#include <iostream>
#include <vector>

using namespace std;
void print(vector<int> a,decltype(a.size()) size,size_t sign)
{
	if(size==sign)
		return;
	cout<<a[sign]<<" ";
	print(a,size,++sign);
}

int main()
{
	vector<int> a{1,2,3,4,5,6};
	print(a,a.size(),0);
	cout<<endl;
	return 0;
}
