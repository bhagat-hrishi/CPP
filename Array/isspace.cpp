#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    In C++, isspace is a predefined function used for string and
     character handling.cstring is the header file required for string functions
      and cctype is the headerfile required for character functions.
    following are some white spaces
      ‘ ‘ – Space
      ‘\t’ – Horizontal tab
      ‘\n’ – Newline
        ‘\v’ – Vertical tab
        ‘\f’ – Feed
    ‘\r’ – Carriage return
    */

    string s;
    //enter "hrishi bhagat "enter" "tab" " o/p should 3
    cout<<"\nEnter string:";
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.length();i++)
    {
        if(isspace(s[i]))
            cnt++;
    }
    cout<<"\nwhite space count: "<<cnt;
}
