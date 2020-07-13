/*
plane types cannot be overloaded by const or volatile
but reference and pointer type can be overloaded
following code for plane type will give error
#include <iostream>
using namespace std;
int function ( int x ) {
    cout<<"\nnormal called";
    return x + 10;
}

int function ( int const x ) {
    cout<<"\nconstant called";
    return x + 10;
}

int main() {
      return 0;
}

*/
#include <iostream>
using namespace std;
int function ( int*x )
{
    cout<<"\nnormal called";
    return *x + 10;
}

int function ( int const *x ) {
    cout<<"\nconstant called";
    return *x + 10;
}

int main() {
     int a=90, b=89;
     int *x=&a;
     const int *z=&b;
    cout<<"\n"<<function(x);
    cout<<"\n"<<function(z);
  return 0;
}

