
#include <iostream>

using namespace std;
namespace name1
{
    class A;//class declared inside namespace
    class B//class defined inside namespace
    {
    public:
        static void m2()
        {
            cout<<"I am B's m2"<<endl;
        }
        void bshow();
    };
}
void name1::B::bshow()//class method defined outside namespace
{
    cout<<"I am b's show"<<endl;
}
class name1::A//class defined outside namespace
{
    public:
        void m1()
        {
            cout<<"I am A's m1"<<endl;
        }

};
int main()
{
    name1::A obj1;//creating Object class A
    obj1.m1();

    name1::B::m2();//creating Object class B

    name1::B obj2;//creating Object class B
    obj2.bshow();

}
