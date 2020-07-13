/*
.during inheritance we need to explicitly call copy constructor of base class otherwise
only default constructor of base class is called.
*/
#include<iostream>
using namespace std;
class A
{
public:
     A(){ cout <<"\nnormal A";}
     A(const A &obj){ cout <<"\nCopy A";}
};


class D:A
{
public:
    D(){cout<<"\nNormal D";}
    D(const D & obj):A(obj)
    {


        cout <<"\nCopy D";
    }
};
void fun(D& obj)
{

}
int main()
{
   D d1;
   cout<<endl<<"_____________________"<<endl;
   D d(d1);
   fun(d1);
}
