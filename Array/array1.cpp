#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    a[3/2]=1;//same as a[1]=1
    a[2]=a[1];
    for(int i=0;i<5;i++)
        cout<<a[i]<<" ";
    cout<<endl<<endl;
    //there is no index bound checking in c and c++
    int b[3];
    cout<<"Array size is 3"<<endl;
    cout<<"b[-1]: "<<b[-1]<<" b[5]: "<<b[5];

    //In c++ it is compile error to initialize array with more element than size but NOT in C
    int c[2]={1,2,2,3};


}
