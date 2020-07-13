/*
for deriving of structure default access specifier is public and for class it is private
*/
//try this commented parts also
#include<bits/stdc++.h>
using namespace std;
/*
struct A
{

    int a;
};
struct B : A //same as struct B:public A
{

};*/
/*
class A
{
public:
    int a;
};
class B : A //same as class B:private A
{

};
so here we cant access directly
*/
/*
struct A
{

    int a;
};
class  B : A //same as struct B:private A
{

};*/
class A
{
public:
    int a;
};
struct B : A //same as struct B:public A
{

};
int main()
{
    B obj;
    cout<<obj.a;
}
