#include<iostream>
#include<stdio.h>

using namespace std;

int f ( int &x) {
return x+10;
}

int f ( const int &x) {
return x;
}

int main() {

int a = 6;
const int b = 9;

// const references can accept const lvalues, rvalues and non-const lvalues
cout << "Reference to a const version " << f(3) << endl; // rvalue
cout << "Reference to a const version " << f(b) << endl; // const lvalue
cout << "Non const Reference version " << f(a); // non-const lvalue

return 0;
}
