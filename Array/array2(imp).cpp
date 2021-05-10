
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[5];
/*
here a and &a print same value but when we add 1 to each then a+1 gives address
of next element in array and &a+1 give complete next array address
i.e if a=10 and then &a=10 also
if size of int is 4
    a+1=14 but &a+1=(10+4*5)=30

conclusion - a point first element in array and &a point to complete array of 5 elements

*/
printf("a=%p : &a=%p\n", a, &a);
printf("a=%p : &a=%p\n", a+1, &a+1);
printf("================================================\n");
int b[2][3];
/*
    here also b and &b give same answer
    here b is pointer to array of 3 ints but
     &b is pointer to array of 2 row array of 3 int
i.e. if b=10 then &b=10 also
if size of int is 4
    b+1=10+(4*3)=10+12=22 point to array of next 3 ints
    &b+1=10+(4*20)=34 point to next array of 2 rows of 3 ints
*/
printf("b=%p : &b=%p\n", b, &b);
printf("b=%p : &b=%p\n", b+1, &b+1);
/*
array name itself is a pointer to the first element but
 &(i.e. address-of) for the array name is a pointer to the whole array itself.
*/


/*
Note:
But when you put the ampersand(&) before the array name then its type change. It becomes a pointer to the array.
*/
int x[5]={21,4,5,6,7};
cout<<"\nX:    "<<x;
cout<<"\n&X:   "<<x;
cout<<"\nX+1:  "<<(x+1);
cout<<"\n&X[1]:"<<&x[1];
return 0;
}
