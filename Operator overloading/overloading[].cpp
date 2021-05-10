
#include<bits/stdc++.h>
using namespace std;
class Integer
{
    int a[4];
public:
    Integer(int *p)
    {
        for(int i=0;i<4;i++)
        {
            a[i]=p[i];
        }
    }
    //overloading of [] operator
    int operator[](int index)
    {
        return this->a[index];
    }
};
int main()
{
    int b[]={2,3,4,5};
    Integer obj(b);
    cout<<obj[0]<<" "<<obj[1]<<" "<<obj[2]<<" "<<obj[3];

}
