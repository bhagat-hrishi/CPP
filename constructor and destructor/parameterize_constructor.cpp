
#include<bits/stdc++.h>
using namespace std;
class A
{
    int a;
public:
    A(int a)
    {
        cout<<"\npara constructor";
        this->a=a;
    }
    void show()
    {
        cout<<"\nDATA: "<<a;
    }

};
int main()
{
    A obj1=A(90);//explicit call
    obj1.show();
    A obj2(89);//implicit call
    obj2.show();


}
