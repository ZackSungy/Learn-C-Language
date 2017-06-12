#include<iostream>
#include<bitset>
using namespace std;


int main()
{
	bitset<100000001>*p = new bitset<100000001>;
	p->set();
	for (int i = 2; i <= 10000; i++)
	if (p->test(i))
	for (int j = i*i; j<p->size(); j += i)
		p->reset(j);
	for (int i = 0; i <= 100000000; i++)
	if (p->test(i))
		cout << i << endl;
	delete[] p;
	return 0;
}