
#include<iostream>
#include<stdio.h>
using namespace std;
//when exception is rethrown it will not catch by same catch statement 
//or any other catch statement in same group
int main()
{
    try
    {
        try
        {
            throw 90;
        }
        catch(int a)
        {
            cout<<"Inner int"<<endl;
            throw;//here rethrown exception is not caught by same group catch statement it will caught by outer catch
            //statement
        }
        catch(double  a)
        {
            cout<<"double"<<endl;
            throw;
        }
        catch(int b)
        {
            cout<<"Another int"<<endl;
        }
    }
    catch(exception e)
    {
        cout<<"outer  exception"<<endl;
    }
    catch(int a)
    {
        cout<<"\nouter int"<<endl;
    }

}
