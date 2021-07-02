
// C++ program to demonstrate working of
// functors.
#include <bits/stdc++.h>
using namespace std;
//swap can swap any type of data
class A
{
    int a;
    string name;
    public:
        A(int b,string n):a(b),name(n){}
        void show()
        {
            cout<<endl<<"A: "<<a<<" "<<name;
        }
};
int main()
{
    A obj1(9,"hrishi1"),obj2(10,"hrishi2");
    obj1.show();
    obj2.show();
    swap(obj1,obj2);
    cout<<endl<<"After swapping: ";
    obj1.show();
    obj2.show();



}
