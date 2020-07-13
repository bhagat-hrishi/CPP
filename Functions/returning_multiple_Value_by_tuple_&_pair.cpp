#include<bits/stdc++.h>
#include<tuple>
using namespace std;
tuple <int,float,char>fun1(int a,float b)
{
    return make_tuple(a+10,b+10,'a');
}
pair<int,int> fun2(int a,int b)
{
    return make_pair(a,b);
}
int main()
{
    int a,b;
    float c;
    char ch;
    cout<<"\nEnter int ,int ,float value";
    cin>>a>>b>>c;

    tie(a,c,ch)=fun1(a,c);//tie function used to unpack tuple values
    cout<<a<<" "<<c<<" "<<ch<<endl;

    pair<int,int>p=fun2(a,b);
    cout<<"pair: "<<a<<" "<<b;
}
