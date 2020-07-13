#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"\nA:"<<this;
    }
};
class B : public A
{
public:
    B()
    {
        cout<<"\nB:"<<this;
    }

};
int main() {
    B obj;
//	B obj(10);
	return 0;
}
