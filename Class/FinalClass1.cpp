#include <iostream>
using namespace std;
//Sometimes you don’t want to allow derived class to override the base class’ virtual function.
class Base
{
public:
//by making below function as final we avoiding overriding of function inside child class
    virtual void myfun() final
    {
        cout << "myfun() in Base";
    }
   virtual void override_possible() 
    {
        cout << " parent possilbe override";
    }
};
class Derived : public Base
{
    public:
    // void myfun()//error
    // {
    //     cout << "myfun() in Derived\n";
    // }
    void override_possible() final
    {
        cout << "Child possilbe override";
    }
};
class AnotherDerived : public Derived
{
    public:

};

int main()
{
    Derived d;
    Base &b = d;
    b.override_possible();



    //____________________

        int final = 20;
        cout << final;
  

    return 0;
}
