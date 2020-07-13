
#include <bits/stdc++.h>
using namespace std;
/*
atol- c type string to long integer
        if no valid conversion performed then return 0
atoll- c type string to long  long integer
        if no valid conversion performed then return 0
atof- c type string to float
        if no valid conversion performed then return 0
*/
int main()
{
    char s[]=" 1 / 2324 6 ";
    cout<<"for [ 1 / 2324 6 ]:"<<endl;
    cout<<"atol :  "<<atol(s)<<endl;
    cout<<"atoll:  "<<atoll(s)<<endl;
    cout<<"atof :  "<<atof(s)<<endl;
    char s1[]="/122";
    cout<<"for [/122]:"<<endl;
    cout<<"atol :  "<<atol(s1)<<endl;
    cout<<"atoll:  "<<atoll(s1)<<endl;
    cout<<"atof :  "<<atof(s1)<<endl;
    char s2[]="123/56";
    cout<<"for [123/56]:"<<endl;
    cout<<"atol :  "<<atol(s2)<<endl;
    cout<<"atoll:  "<<atoll(s2)<<endl;
    cout<<"atof :  "<<atof(s2)<<endl;

}
