
/*
0. unique_ptr is a class template.
1. unique_ptr is one of the smart pointer provided by c++11 to prevent memory leaks.
2. unique_ptr wraps a raw pointer in it, and de-allocates the raw pointer,
   when unique_ptr object goes out of scope.
3. similar to actual pointers we can use arrow and * on the object of unique_ptr,  because it is overloaded in unique_ptr class.
4. When exception comes then also it will de-allocate the memory hence no memory leak.
5. Not only object we can create array of objects of unique_ptr.
*/
#include<iostream>
#include<memory>
using namespace std;
class rectangle
{
    int l;
    int b;
public:
    rectangle(int l,int b)
    {
        this->l=l;
        this->b=b;
    }
    int area()
    {
        return l*b;
    }
    ~rectangle()
    {
        cout<<"\nDestructor called for "<<l<<" "<<b;
    }
};

int main()
{
    //one way to init
    rectangle *f=new rectangle(3,4);
    unique_ptr<rectangle> up1 (f);

    cout << endl<< "for up1: " << up1->area();

    //another way to init
    unique_ptr<rectangle>up2(new rectangle(4,5));
    cout<<endl<<"for up2: "<<up2->area();

   // up2=up1;//error as you cannot copy ownership

    unique_ptr<rectangle>up3=move(up1);//move ownership from  up1 to up3 and now p1 point to null
    cout<<endl<<"for up3: "<<up3->area();

    //get fuction will give pointer inside unique pointer
    rectangle *pointer=up2.get();//this will give pointer present inside up2

    cout<<endl<<"for pointer by get function: "<<pointer->area();

    //release function relase ownership of managed object and return ownership to new Object
    pointer=up3.release();//here up3 realseas ownership of managed object and give to up4
    cout << endl<< "for pointer by realseas function: " << pointer->area();

    //reset fuction used to reset i.e by this managed object get replaced
    up2.reset(pointer);
    cout << endl<< "for up2 After reset with pointer: " << up2->area();
    cout << endl<< "for up3 After release: " << up3->area();


}
