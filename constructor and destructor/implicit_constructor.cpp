#include<bits/stdc++.h>
using namespace std;


class A
{
    float f;
    int age;
    bool b;
public:
    A(float d):f(d),age(-1){
        cout<<"\nI am float";
    }
   explicit A(int a):age(a),f(9.4){
        cout<<"\nI am int";
    }
    explicit A(bool a):b(a){
        cout<<"\nI am bool";
    }

};
int main()
{
    A obj1=9.4f;//by default floating point is double so f is added and here also conversion constructor called
    A obj2=90;//here implicitly constructor is called
    A obj3=true;
}
