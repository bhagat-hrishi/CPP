/*
Deleting a derived class object using a pointer to a base class
 that has a non-virtual destructor results in undefined behavior
*/
#include<iostream>

using namespace std;

class base {
public:
	base()
	{ cout<<"Constructing base \n"; }
	/*
Making base class destructor virtual guarantees that the object of derived class is destructed properly,
	*/
	//virtual~base() then child object is destructed
	~base()
	{ cout<<"Destructing base \n"; }
};

class derived: public base {
public:
	derived()
	{ cout<<"Constructing derived \n"; }
	~derived()
	{ cout<<"Destructing derived \n"; }
};

int main(void)
{
derived *d = new derived();
base *b = d;
delete b;

return 0;
}
