#include<bits/stdc++.h>
using namespace std;
/*
1)an exception can be re-thrown using “throw; ”
2)rethrown exception is of same type of exception that we caught
means if we caught int type of exception then rethrown exception is of int type
if double then rethrown exception is of double
*/
int main()
{
    try{
        try
        {
            throw 2.5;
        }
        catch(float f)
        {
            cout<<"\nFloat";
            throw;//rethrow
        }
        catch(double d)
        {
            cout<<"\nDouble";
            throw;//rethrow
        }
        catch(int a)
        {
            cout<<"\nint";
            throw;//rethrow
        }
    }
    catch(float b)
    {
        cout<<"\nfrom float re throwing";
    }
    catch(int b)
    {
        cout<<"\nfrom int re throwing";
    }
    catch(double d)
    {
        cout<<"\nfrom double re throwing";
    }
}
