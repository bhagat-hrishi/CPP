#include<iostream>
using namespace std;
int main()
{
/*
cin.getline(line,size)
getline function read line as input .and reading end when size-1 character is read or newline
chracater is encountered
*/
    char ch[3];//it take input up to line of length 2
    cin.getline(ch,3);
    cout<<ch;
/*
cout.write(line,size)
this function display entire line
Note- it does not stop displaying charcter automatically when null is encountered
if size is greater than length of line then it will display beyond that
*/

cout.write(ch,3);


}
