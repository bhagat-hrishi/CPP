#include<bits/stdc++.h>
using namespace std;
class complex_number
{
    int x;
    float y;
public:
    complex_number(int x,float y)
    {
        this->x=x;
        this->y=y;
    }
    //conversion constructor for conversion of int to complex_number
    complex_number(int x)
    {
        cout<<endl<<"int called"<<endl;
        this->x=x;
        this->y=0;
    }
    //conversion constructor for conversion of float to complex_number
    complex_number(float f)
    {
        cout<<endl<<"float called"<<endl;
        this->y=f;
        this->x=0;
    }
    void display()
    {
        cout<<endl<<x<<"+ "<<y<<"xi "<<endl;
    }
};
int main()
{
    complex_number obj(1,2);
    obj.display();
    obj=3;
    obj.display();
    obj=4.5f;
    obj.display();
}
