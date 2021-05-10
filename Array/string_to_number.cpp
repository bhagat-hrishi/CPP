#include<bits/stdc++.h>
#include<boost/lexical_cast.hpp>
#include<string>
using namespace std;
int main()
{
    /*
    1)By sscanf()-
         is a C style function similar to scanf().
         It reads input from a string rather that standard input.
         similarly we can read float by %f and double by %lf
    */
    char *str="1234.234";
    float x;
    sscanf(str,"%f",&x);
    cout<<"sscanf: "<<x<<endl;

    /*
    2)stoi-
        The stoi() function takes a string as an argument and returns its value.

    */
    string str1 = "45";
    string str2 = "3.14159";
    string str3 = "31337 geek";
//    following part work on ide but not here
//    cout << "stoi(\"" << str1 << "\") is "
//         << stoi(str1) << '\n';
//    cout << "stoi(\"" << str2 << "\") is "
//         << stoi(str2)<< '\n';
//    cout << "stoi(\"" << str3 << "\") is "
//         <<stoi(str3)<< '\n';


    cout<<endl<<boost::lexical_cast<int>("12323456");
    cout<<endl<<boost::lexical_cast<float>("213.3");


}
