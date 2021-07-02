#include<bits/stdc++.h>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"\nI am A";
    }
    A(int x)
    {
        cout<<"\nI am A with argument";
    }
    ~A()
    {
        cout<<"\nI am destructor of A";
    }
};
class B : public virtual A
{
    public:
    B()
    {
        cout<<"\nI am B";
    }
    B(int x):A(x)
    {
        cout<<"\nI am B with argument";
    }


};
class C : virtual A
{
    public:
    C()
    {
        cout<<"\nI am C";
    }
    C(int x):A(x)
    {
        cout<<"\nI am C with argument";
    }


};
class D :public B,public C
{
    public:
    D()
    {
        cout<<"\nI am D";
    }
    D(int x):C(x),B(x)
    {
        cout<<"\nI am D with argument";
    }

};
int main()
{
    cout<<"here constructor of A called once and destructor also\n";
    D obj(6);
}
