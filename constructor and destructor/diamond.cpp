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
class B : A
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
class C : A
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
/*
Here Object of D class has two copies of all memebers of A and this causes ambiguities.
*/
int main()
{
    cout<<"here constructor of A called 2 times and destructor also\n";
    D obj(6);
}
