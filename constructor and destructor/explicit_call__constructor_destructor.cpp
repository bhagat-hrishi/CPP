#include <iostream>
using namespace std;

class Test
{
public:
	Test() { cout << "Constructor is executed\n"; }
	~Test() { cout << "Destructor is executed\n"; }
	friend void fun(Test t);
};
void fun(Test t)
{
    cout<<"\nInside fun\n";
	Test();//temporary object is created here so constructor and destructor is called
	t.~Test();
	cout<<"\nfun end\n";
}
int main()
{
    cout<<"\nmain start\n";
	Test();//temporary object is created here so constructor and destructor is called
	cout<<"\n____________\n";
	Test t;
	cout<<"\n____________\n";
	fun(t);
	cout<<"\nreturn from fun\n";
	return 0;
}
