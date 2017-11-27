#include <iostream>

using std::cout;
using std::endl;

void print(const int *cp)
{
	if(cp){
		while(*cp){
			cout<<*cp++;
		}
	}
	cout<<endl;
}

int main()
{
	int a[]={1,2,3,4,5,6,7};
	print(a);
	return 0;
}
