#include <iostream>

using namespace std;
/*
1)It is also possible to create more than one namespaces in the global space
2)it is possible to create two namespace block with same name
2nd block is actually continue to 1st block So both namespace are SAME
which are defined in different parts
*/
namespace name1
{
    int a=90;
}
namespace name2
{
    int a=12;
}
namespace name1//this is rest part of namespace
{
    //this namespace is continued to previous name1
    void showpreviousA()//this show o/p as 90 means this namespace is continued to previous name1
    {
        cout<<a;
    }
    int b=91;

}
int main()
{
    cout<<name2::a<<endl;
    name1::showpreviousA();

}
