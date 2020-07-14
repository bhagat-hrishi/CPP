
#include<bits/stdc++.h>
using namespace std;
/*
 A derived class exception should be caught before a base class exception
 If do reverse then code will run but it will show warning
*/
class base
{};
class derived : public base
{};
int main()
{
    base obj1;
    derived obj2;
    try
    {
        throw obj2;
    }
    catch(base b)
    {
        cout<<"\nbase class";
    }
    catch (derived b)
    {
        cout<<"\nDerived class";
    }

}
