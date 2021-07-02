#include<bits/stdc++.h>
using namespace std;
class A
{
    int a,b;
public:
    A()
    {
        cout<<"\nI am default constructor";
    }
    A(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    A(const  A &obj)
    {
        cout<<"\nCopy constructor called here";
        a=obj.a;
        b=obj.b;
    }
    void display()
    {
        cout<<"\nDATA: "<<a<<" "<<b<<"\n";
    }
};
int main()
{
    A obj1(8,9);//para constructor 
    obj1.display();
    A obj2=obj1;//copy constructor called here
    obj2.display();
}

