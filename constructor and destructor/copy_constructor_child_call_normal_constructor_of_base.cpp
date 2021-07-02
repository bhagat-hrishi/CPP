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
void fun1(D& obj) //object is passed as reference so copy const not called
{

}
void fun2(D obj)//Object is passed as value so copy const called
{

}
int main()
{
   D d1;//normal const called
   cout<<endl<<"_____________________"<<endl;
   D d(d1);
   cout << endl<< "after call to fun2_____________________" << endl;
   fun2(d1);
   cout << endl<< "after call to fun1_____________________" << endl;
   fun1(d1);
   
}
