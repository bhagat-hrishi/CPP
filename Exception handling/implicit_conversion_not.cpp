#include<bits/stdc++.h>
using namespace std;
/*
Implicit type conversion doesn’t happen for primitive types.
*/
int main()
{
    //here implicitly character not converted into int or float
    try{
        throw 'a';
    }
    catch(int a)
    {
        cout<<"Int";
    }
    catch(float b)
    {
        cout<<"float";
    }
    catch(...)
    {
        cout<<"catch all";
    }
    cout<<"\nAfter catch";
}
