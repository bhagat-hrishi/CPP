#include<iostream>
using namespace std;

template<typename t>
t mymax(t a, t b)
{
    return a>b ? a: b;
}

//here instead of tyepname class keyword is used
template <class t>
t mymin(t a,t b)
{
    return a<b ? a: b;
}
int main()
{
    cout<<mymax(2,3)<<" "<<mymin(2,3)<<endl;//for int
//    cout<<mymax(3,4.5);//error as one is int and another is double
    cout<<mymax(3.4,5.6)<<" "<<mymin(3.4,5.6)<<endl;//for double

}
