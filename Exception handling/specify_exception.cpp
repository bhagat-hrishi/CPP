#include<iostream>
#include<stdio.h>
using namespace std;

void fun(int x) throw(int ,float )
{
    /*
Function can only restrict type of exception it throws  back to try block that called it .
and it will not restrict inside function
The restriction are applied only when throwing an exception outside function
    */
    try//so here there is no any restriction inside function to throw particular type of exception
    //so we can throw double type of exception here
    {
        throw 9.0;
    }
    catch(double d)
    {
        cout<<"double caught inside function"<<endl;;
    }
    if(x==0)
        throw 8;
    else if(x==1)//Throwing any another type of exception show abnormal termination
        throw 9.8;//here throwing double type of exception cause abnormal termination

}
int main()
{
    try
    {
        cout<<"1 called"<<endl;
        fun(1);
        cout<<"0 called"<<endl;
        fun(0);
    }
    catch(int a)
    {
        cout<<"Int caught"<<endl;
    }
    catch(double d)
    {
        cout<<"double caught"<<endl;
    }
}
