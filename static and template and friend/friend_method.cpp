#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
public:
    A()
    {
        a=90;
    }
    A(int a)
    {
        this->a=a;
    }
    A (const A & obj)
    {
        cout<<"\nI am copy constructor";
    }
    friend void show(A& );
    friend void show_pass_by_value(A);
};
void show(A& obj)//here copy constructor not called
{
    cout<<endl<<"show: "<<obj.a;
}
void show_pass_by_value(A obj)
{
    //as here we have pass by value so copy constructor called
    cout<<endl<<"show pass by value: "<<obj.a;
}
class B
{
    int b;
public:
    B()
    {
        b;
    }
    void ShowData()
    {
        cout<<endl<<this->b;
    }
};
int main()
{
    A obj(123);
    show(obj);
    show_pass_by_value(obj);
}
