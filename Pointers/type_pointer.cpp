#include<bits/stdc++.h>
using namespace std;
int main()
{
    //dangling pointer
    //pointer pointed to deleted memory location or pointing to data that is "not" exist

    int *p=(int*)malloc(sizeof(int));
    // After below free call, ptr becomes a
    // dangling pointer
    free(p);
    // No more a dangling pointer
    p=NULL;

    //void pointer
    //store address of any data type
    //cannot be fetched directly must be typecasted
    void *void_ptr;
    int a=34;
    float b=1.2;
    void_ptr=&a; //point to int
    // void_ptr += 1; //error ==>pointer arithmetic not possible

    // cout<<*void_ptr;//error
    cout<<endl<<"pointing to int: "<<*(int*)void_ptr;//observe typecast  int

    void_ptr=&b;//point to float
    float f = *(float *)void_ptr; //observe typecast float
    cout << endl<< "pointing to float: " << f;

    //null pointer
    /*
    NULL Pointer is a pointer which is pointing to nothing.
     In case, if we don’t have address to be assigned to a pointer, then we can simply use NULL.
    */
    int *i_am_null = NULL;
    cout<<endl<<"Null pointer:"<<i_am_null;


    //wild pointer
    /*
    A pointer which has not been initialized to anything (not even NULL) is known as wild pointer.
    The pointer may be initialized to a non-NULL garbage value that may not be a valid address.
    */
    int *wild; /* wild pointer */
    cout<<"\nwild pointer"<<wild;
    int x = 10;

    // wild is not a wild pointer now
    wild = &x;
}
