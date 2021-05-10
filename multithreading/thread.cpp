#include<iostream>
#include "
using namespace std;
void myFunction()
{
    cout<<"Hello from This thread";
}
int main()
{
    std::thread t1(myFunction);
    t1.join();
    cout<<"\nI am inside main";
    return 0;
}
