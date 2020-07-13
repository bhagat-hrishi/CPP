#include<bits/stdc++.h>
using namespace std;
//constant function can be called by both constant and normal function
//normal function can be called by only normal object
class check_const
{
private:
    int a;
public:
    //constant Object must be initialized otherwise we get compile error
    check_const():a(0){}

    void const_fun() const
    {
        cout<<endl<<"I am constant function  I can't change value of member";
        //a=90;//This show compile error as
        //we can't modify member inside constant function

    }
    void normal_fun()
    {
        cout<<endl<<"I am normal function";
    }
};
int main()
{
    check_const normal_Object;
    normal_Object.const_fun();
    normal_Object.normal_fun();

    const check_const constant_Object;//creating constant object
    constant_Object.const_fun();
    constant_Object.normal_fun();//Error-constant Object cannot call normal member function
}

