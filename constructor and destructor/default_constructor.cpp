#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;
    float f;

public:
    //Allowed keyword for constructor declaration are inline and explicit only
    //This is default constructor
    inline explicit A()
    {
        cout << "\nI am default";
    }
    //constructor with value assigned to each argument is also default constructor
    //so here we have 2 default constructor so we get error here
    A(int a = 90, int b = 34, string s = "hrishi")
    {
        cout << "\nI am also default";
    }
};
int main()
{
    A obj;
}
