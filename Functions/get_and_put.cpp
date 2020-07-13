#include<iostream>
using namespace std;
/*
istream and ostream class contain get() and put() function  respectively
to handle "single" input and o/p character operations
*/
int main()
{
    char ch,tmp;
    cin.get(ch);//cin.get(char*) version
    cin>>ws;
    tmp=cin.get();//cin.get(void) version
    cout.put(ch);
    cout.put(ch);


}
