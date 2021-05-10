#include <stdio.h>
#include <string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"\nEnter string with \'-\' as delimiter:";
    string s1,s2;
    getline(cin,s1);//taking i/p from std input stream

    stringstream SS(s1);
    cout<<"\nans: ";
    //taking i/p from stringstream and '-' is delimiter and each time o/p stored in s2
    while(getline(SS,s2,'-'))
    {
        cout<<s2<<" ";
    }
}
