#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    A character array initialized with double quoted string has last element as ‘\0’
    */
    char ch1[]="abc";
    cout<<"\nsizeof(ch1): "<<sizeof(ch1);
    cout<<"\nstrlen(ch1): "<<strlen(ch1);
    cout<<"\n===============================";
    char ch2[]={'a','b','c'};
    cout<<"\nsizeof(ch2): "<<sizeof(ch2);
    //The strlen function looks for a null character and behaves abnormally if it doesn’t find it.
    cout<<"\nstrlen(ch2): "<<strlen(ch2);//so this line gives abnormal behavior

    /*as double quote string add NULL so if we specify size as 3 for "abc" this is not valid
    in c++ but valid in c*/

    //following is error in c++ but not in c
//    char ch3[3]="abc";//error

}
