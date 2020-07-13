#include <iostream>
using namespace std;

class Base{
public:
    Base(){
        std::cout << "Constructor base" << std::endl;
    }
    ~Base(){
        std::cout << "Destructor base" << std::endl;
    }
    Base& operator=(const Base& a){
        std::cout << "Assignment base" << std::endl;
    }
};

class Derived : public Base{
public:
    Derived()
    {
        cout<<"Constructor child"<<endl;
    }
    ~Derived()
    {
        cout<<"Destructor child"<<endl;
    }
    /*
    After commenting following function compiler will provide
    default = operator and in that case it will call parent class = operator
    */
    Derived& operator=(const Derived& a){
        std::cout << "Derived Assignment Child" << std::endl;
    }
};

int main ( int argc, char **argv ){
    Derived p1;
    Derived p2;
    p2 = p1;
    return 0;
}
