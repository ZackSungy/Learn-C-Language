#include <iostream>
using namespace std;

int odd[]={1,3,5,7,9};
int even[]={2,4,6,8,10};
decltype(odd) *arrPtr(int i)
{
	return (i%2)?&odd:&even;
}

int main()
{
	decltype (odd) *str=arrPtr(2);
	for(int i=0;i<5;i++)
		cout<<(*str)[i]<<endl;
	return 0;	
}
