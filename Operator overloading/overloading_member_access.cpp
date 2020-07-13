

#include<bits/stdc++.h>
using namespace std;
class Integer
{

public:
    int a;
    Integer(int p)
    {
      a=p;
    }
    //overloading of -> operator
    Integer* operator->()
    {
        cout<<"\ncalled\n";
        return this;
    }
};
int main()
{
    Integer obj(3435);
    Integer *ptr=&obj;//declare pointer
    cout<<ptr->a;
}
