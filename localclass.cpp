#include<bits/stdc++.h>
using namespace std;
/*
1)Class declared inside function is local to that function
2) A local class type name can only be used in the enclosing function.
3)All local class method must be defined inside class only
4)local class cannot have static data member but it can have static function
*/
void fun()
{
    class A
    {
        static int a;//4.invalid
    public:
        static void show()//4.valid
        {
            cout<<"I am static function of local class";
        }
        void show1()//3.valid
        {
            cout<<"I am method of local class";
        }


    };
    void A::show2()
    {
        cout<<"I am method of local class";
    }

    A obj1;//2.valid
    A *ptr;//2.valid
}
int main()
{
    A obj2;//2.invalid
    A *prt;//2.invalid


}
