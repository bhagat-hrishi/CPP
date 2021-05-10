
#include<iostream>
using namespace std;

/*
If the static function is to be defined outside the class
then static keyword must be present in function declaration only not in the definition outside the class.
*/
class A
{
public:
    static void fun1()
    {
        cout<<endl<<"fun1";
    }
    static void fun2();
};
static void A::fun2()//static here cause error
//if we remove static code will run fine
{
    cout<<endl<<"fun2";
}
int main()
{
    A::fun1();
    A::fun2();
}
