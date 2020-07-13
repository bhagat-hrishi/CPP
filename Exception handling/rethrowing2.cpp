
#include<iostream>
#include<stdio.h>
using namespace std;
//when exception is rethrown it will not catch by same catch statement or any other catch statement in same group
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
            cout<<"!int";
            throw;//here rethrown exception is not caught by same group catch statement it will caught by outer catch
            //statement
        }
        catch(double  a)
        {
            cout<<"sadf";
            throw;
        }
        catch(int b)
        {
            cout<<"Another int";
        }
    }
    catch(exception e)
    {
        cout<<"outer  exception";
    }
    catch(int a)
    {
        cout<<"outer tin";
    }

}
