#include<bits/stdc++.h>
using namespace std;
//cout is Object of ostream class
//cin is Object of istream class
class complex_number
{
    int i;
    double j;
public:
    //overloading of <<(insertion operator)
    friend ostream&  operator<< (ostream& out,complex_number&c)
    {
        out<<"\nData:\n";
        cout<<c.i<<" "<<c.j;

    }
    //overloading of >> (extraction operator)
    friend istream& operator >>(istream&in,complex_number&c)
    {
        cout<<"\nEnter int value";
        in>>c.i;
        cout<<endl<<"Enter double value";
        in>>c.j;

    }
};
int main()
{
    complex_number obj;
    cin>>obj;
    cout<<obj;

}
