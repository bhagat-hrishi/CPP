#include<bits/stdc++.h>
using namespace std;


int main()
{
    /*
                         Using char*

    Here, str is basically a pointer to the (const)string literal.
Syntax:
char* str = "This is GeeksForGeeks";
    */

    char *ch="hrishikesh";//show warning in c++ as we should use const
    cout<<endl<<ch;
/*
Note:
1)In C string literals are arrays of char but
in C++ they are constant array of char. Therefore use const keyword before char*
so we should above  as const char *ch="hrishikesh";

2)we "cannot" modify string later in  program we can change pointer to point something else
but we "cannot" modify this string as str[0]='a' likewise
*/
     const char* str1 = "Hello"; // No warning

       ch[0]='a';//error
       str1[1]='b'; //error

       str1="new string";//it can point to some another string


       /*
        Using std::string (by using string class)

        std::string str = "This is GeeksForGeeks";
       */
        string str2="this is string class example";
        cout<<endl<<"================"<<endl<<str2;
        str2[0]='p';

        /*
        Using char[]

char str[] = "This is GeeksForGeeks";
     or
char str[size] = "This is GeeksForGeeks";
//  Here str is a array of characters denoting the string
        */

    //we can modify string in program

         char str4[] = "Hello";
    // or char str1[]={'H', 'e', 'l', 'l', 'o', '\0'};

    // modify string to "Hollo"
    str4[1] = 'o';

    cout << str4 << endl;
}
