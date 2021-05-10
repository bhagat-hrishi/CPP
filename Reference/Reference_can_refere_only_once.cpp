#include <iostream>
using namespace std;


/*
When we assign new variable  to reference variable which is initially point to 
some variable then value of variable is assigned only
 and reference variable cannot refer to new variable

*/
int main() {
    int a=89;
    int &b=a;
    cout<<"b : "<<b<<"\n";
    cout<<"&b: "<<&b<<" &a: "<<&a<<"\n";
    int c=90;
    b=c;
    cout<<"&b: "<<&b<<" &a: "<<&a<<"  &c: "<<&c<<" "<<endl;
    cout<<"b: "<<b<<" a: "<<a<<" c: "<<c<<endl;
    // eturn 0;
}