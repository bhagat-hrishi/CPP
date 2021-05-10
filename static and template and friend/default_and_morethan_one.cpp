
#include<iostream>
using namespace std;

template<class T, class U>//more than one argument for template
class A {
	T x;
	U y;
public:
	A() { cout<<"A: Constructor Called"<<endl; }
};

//default argument for template
template<class T, class U =double>
class B  {
public:
    T x;
    U y;
    B() {   cout<<"B: Constructor Called"<<endl;   }
};

int main() {
A<char, char> a;
A<int, double> b;

B<int>obj1;
B<double>obj2;

return 0;
}
