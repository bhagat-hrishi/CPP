#include<bits/stdc++.h>
using namespace std;
class pract
{
    static int a;
public:

    /*
    the static variables in a class are shared by the objects.
    There can not be multiple copies of same static variables for different objects.
     Also because of this reason static variables can not be initialized using constructors.
    */
    pract()
    {
        //a=90;//error
    }
};
int pract::a=90;
int main()
{

}
