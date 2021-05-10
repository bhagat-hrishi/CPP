#include<bits/stdc++.h>
using namespace std;
namespace name1
{
    namespace name2
    {
        namespace name3
        {
            int a=90;
        }
    }
}
int main()
{
    namespace new_name=name1::name2::name3;//alias name for namespace
    cout<<new_name::a<<" "<<name1::name2::name3::a;

}
