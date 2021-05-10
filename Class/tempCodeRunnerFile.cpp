#include<bits/stdc++.h>
using namespace std;
class A
{
  public:
  operator int()
  {
    cout<<"Called";
    return 90;
  }
 explicit A(int a)
  {
    cout<<"\nCalled int parameter ";
  }
};
int main()
{ 
  A obj(0);
  obj=90;
}