#include<bits/stdc++.h>
using namespace std;

/*
static member function can be called by . operator by Object and
by :: operator by class

Static member functions are allowed to access only the static data members or other static member functions,
they can not access the non-static data members or member functions of the class

*/


class GfG
{
public:

    void non_static()
    {
        cout<<"I am non static";
    }
    static void  I_am_static()
    {
        cout<<"I am static";
    }
	// static member function
	static void printMsg()
	{
	    I_am_static();//valid
	    non_static();//error
		cout<<"Welcome to GfG!";
	}
};


int main()
{
	GfG::printMsg();
}
