
#include<bits/stdc++.h>
using namespace std;
class Integer
{
    int a;
    public:
        //normal constructor
        Integer()
        {

        }
        //para constructor
        Integer(int a)
        {
            this->a=a;
        }
        //prefix operator overloading
        Integer operator ++()
        {
            cout<<endl<<"prefix:"<<endl;
            Integer tmp;
            tmp.a=++a;
            return tmp;
        }
        //postfix operator overloading
        Integer operator ++(int)
        {
            cout<<endl<<"postfix:"<<endl;
            Integer tmp;
            tmp.a=a++;
            return tmp;
        }
        void display()
        {
            cout<<"\na:"<<a;
        }
};
int main()
{
        Integer obj(90);
        Integer postObj=obj++;//post increment
        postObj.display();
        cout<<"\n_________________\n";
        cout<<"\nbeacause of previous postfix: ";
        obj.display();
        Integer preObj=++obj;//pre increment
        preObj.display();
}
