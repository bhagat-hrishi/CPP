
#include <iostream>
using namespace std;

class Point
{
public:
    Point()
    {
        cout<<"\nConstructor called";
    }
    ~Point()
    {
        cout<<"\nDestructor called";
    }
};
/*
When the constructor is called explicitly the compiler creates a nameless temporary object
and it is immediately destroyed.
 That’s why 2nd line in the output is call to destructor.
*/
int main()
{
	Point();//explicit call to constructor
    cout<<"\n_______\n";
    Point t;
    t.~Point();//explicit call to destructor

}
