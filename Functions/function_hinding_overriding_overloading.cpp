#include<bits/stdc++.h>
using namespace std;
class Parent
{
public:
    void HindingOfMethod()
    {
            cout<<endl<<"parent Hide";
    }
   virtual void OverridenMethod()
    {
        cout<<endl<<"parent override";

    }
};
class Child : public Parent
{
public:
    //method hiding
    void HindingOfMethod(int a)
    {
        cout<<endl<<"Child Hide";
    }
    //method overriding
    void OverridenMethod()
    {
        cout<<endl<<"child override";
    }
    void Overloading()
    {
        cout<<endl<<"first overloaded";
    }
    void Overloading(double d)
    {
        cout<<endl<<"Second overloaded";
    }


};
int main()
{
    Child obj;
    //as child method hide parent method
   // obj.HindingOfMethod();//this is error

    obj.OverridenMethod();//this will call child method

    //for overloading to work different version of function should
    //present in same class
    obj.Overloading();
    obj.Overloading(3.4);
}
