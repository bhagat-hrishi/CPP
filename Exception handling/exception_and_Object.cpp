#include<bits/stdc++.h>
using namespace std;
/*
When an exception is thrown,
all objects created inside the enclosing try block are
 destructed before the control is transferred to catch block.
*/

class A
{
public:
    A()
    {
        cout<<"const"<<endl;
    }
    ~A()
    {
        cout<<"dest"<<endl;
    }
};
int main()
{
    try
    {
        A obj1;
        throw 90;
        A obj2;
    }
    catch(int a)
    {
        cout<<"exception caught"<<endl;
    }
    cout<<"after caught";
}
