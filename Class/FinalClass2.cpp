/*
final specifier in C++ 11 can also be used to prevent inheritance of class / struct.
 If a class or struct is marked as final then it becomes non inheritable and it cannot be used as base class/struct.
*/
#include <iostream>
class Base final
{
};

class Derived : public Base//inheritance is not possible as Base class is final
{
};

int main()
{
    Derived d;
    return 0;
}
