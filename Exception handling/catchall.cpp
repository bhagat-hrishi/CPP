#include<bits/stdc++.h>
using namespace std;
/*
There is a special catch block called "catch all" catch(...)
that can be used to catch all types of exceptions
*/
int main()
{
    cout<<"I am here"<<endl;
    try
    {
        throw 'a';
    }
    catch(int a)
    {
        cout<<"\n I am int";
    }
    catch(...)
    {
        cout<<"\nI am catch all";
    }
}
