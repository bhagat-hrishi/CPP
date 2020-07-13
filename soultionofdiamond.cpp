/*
here we used virtual keyword
. One important thing to note in the above output is,
 the default constructor of 'A' is called.
 When we use ‘virtual’ keyword, the default constructor of grandparent class is called by default
 even if the parent classes explicitly call parameterized constructor.

code for calling parameterized constructor of A class
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
class B :  virtual public A
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
class C : public virtual A
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
    D(int x):C(x),B(x),A(x)
    {
        cout<<"\nI am D with argument";
    }

};
main()
{
    D obj(6);
}

*/

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
class B :  virtual A
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
main()
{
    D obj(6);
}


