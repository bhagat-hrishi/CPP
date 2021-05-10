#include<bits/stdc++.h>
using namespace std;
void fun1()
{
    cout<<"\nI am fun1";
}
void fun2()
{
    cout<<"\nI am fun2";
    return fun1();
}
/*
A void() cannot return a value that can be used.
 But it can return a value which is void without giving an error.
*/
void test()
{
    cout << "Hello";

    // Returning a void value
    return (void)"Doesn't Print";
}

int main()
{
    //Void function can return another void function
    fun2();

}
