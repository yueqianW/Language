#include <stdlib.h>
#include <iostream>
using namespace std;

namespace A
{
	int x = 1;
	void fun()
	{
		cout<<"A"<<endl;
	}
}
namespace B
{
	int x = 2;
	void fun()
	{
		cout<<"B"<<endl;
	}
}

int main(void)
{
	cout<<A::x<<endl;
	B::fun;
	return 0;
}