

#include<bits/stdc++.h>
using namespace std;
class Integer
{
    int a;
    public:
        //normal constructor
        Integer()
        {
            cout<<"\n\nccallied\n\n";
        }
        //para constructor
        Integer(int a)
        {
            this->a=a;
        }
        Integer(const Integer& obj)
        {
            cout<<"\nCopy constructor";
        }
        //prefix operator overloading
        Integer operator --()
        {
            cout<<endl<<"prefix:"<<endl;
            Integer tmp;
            tmp.a=--a;
            return tmp;
        }
        //postfix operator overloading
        Integer operator --(int)
        {
            cout<<endl<<"postfix:"<<endl;
            Integer tmp;
            tmp.a=a--;
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
        Integer postObj=obj--;//post decrement
        postObj.display();
        cout<<"\n_________________\n";
        cout<<"\nbeacause of previous postfix: ";
        obj.display();
        Integer preObj=--obj;//pre decrement
        preObj.display();
}
