
#include<bits/stdc++.h>
using namespace std;
#define ok//declearing macro ok
main()
{
#undef ok //here we are undefining macro ok so o/p is This is not defined
#ifdef ok
cout<<"this is defined";
#else
cout<<"This is not defined";
#endif // ok

}

