#include<bits/stdc++.h>
using namespace std;
class complex_number
{
    int i;
    float f;
public:
    complex_number(int a,float f)
    {
        i=a;
        this->f=f;
    }
    operator int()
    {
        cout<<endl<<"conversion from complex_number to int";
        return this->i;
    }
    operator float()
    {
        cout<<endl<<"conversion from complex_number to float";
        return this->f;
    }
};

/*
syntax
operator datatype_in_which_we_want_conversion()
{
    return datatype_in_which_we_want_conversion;
}
*/
int main()
{
    complex_number obj(2,3.4);
    int a=obj;//class to primitive
    cout<<endl<<"a: "<<a;
    float b=obj;//class to primitive
    cout<<endl<<"b: "<<b;
}
