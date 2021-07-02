#include <bits/stdc++.h>
using namespace std;
//functor
class functorclass
{
private:
    int data;
public:
    functorclass(int n):data(n){};
    void show()
    {
        cout<<data;
    }
    // This operator overloading enables calling
    // operator function () on objects of functorclass
    void operator ()(int a)
    {
        cout<<a*data;
    }
};
int main()
{
    functorclass obj(8);
    obj(2);//multiplying data of Obj with 2
    obj(3);//multiplying data of obj with 3
}
