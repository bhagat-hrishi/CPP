#include<bits/stdc++.h>
using namespace std;
class A
{
    const int a;//to init non static const data memeber
    int& _ref;//to init reference data member
public:
    A(int b):a(90),_ref(b)
    {
        //_ref=b;//error
        //a=90;//error
        cout<<endl<<"Default constructor";
    }
    void show()
    {
        cout<<endl<<_ref;
    }

};
int main()
{
    A obj(89);
    obj.show();

}
