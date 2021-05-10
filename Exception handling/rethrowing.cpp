#include<bits/stdc++.h>
using namespace std;
/*
1)an exception can be re-thrown using "throw; "
2)rethrown exception is of same type of exception that we caught
means if we caught int type of exception then rethrown exception is of int type
if double then rethrown exception is of double
*/
int main()
{
    try{
        try
        {
            cout<<"Here 2.5 is is double not float"<<endl;
            throw 2.5;
        }
        catch(float f)
        {
            cout<<"\nIn first Float";
            throw;//rethrow
        }
        catch(double d)
        {
            cout<<"\nIn first Double";
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
        cout<<"\nfrom double re throwing"<<endl;
    }
}
