#include <iostream>

using namespace std;
namespace name1
{
    void method1()//method defined inside namespace
    {
        cout<<"method1"<<endl;
    }
    void method2();
}
void name1::method2()//method defined outside namespace
{
    cout<<"method2"<<endl;
}
int main()
{

    //here we can't access name1 directly
    cout<<name1::method1();//but in this way we can access
    using namespace name1;
    //now we can access directly
    method1();
    method2();

}
