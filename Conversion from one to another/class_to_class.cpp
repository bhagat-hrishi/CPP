#include<bits/stdc++.h>
using namespace std;
class Product
{
    int p,q;
public:
    Product(int p,int q)
    {
        this->p=p;
        this->q=q;
        cout<<"\np : "<<this->p<<" q: "<<this->q<<"\n"; 
    }
    Product(const Product& obj)
    {
        cout<<endl<<endl<<"Copy of product\n";
    }
    int getP()
    {
        return p;
    }
    int getQ()
    {
        return q;
    }
};
class Item
{
    int  a,b;
public:
    Item()//default constructor
    {
        a=0;
        b=0;
    }
    Item(Product obj)//conversion constructor called
    {
        cout<<"conversion from Product to Items"<<endl;
        this->a=obj.getP();
        this->b=obj.getQ();
    }
    //overloading of = operator
    void operator=(Product& obj)
    {
        cout<<endl<<"= operator called";
        this->a=obj.getP();
        this->b=obj.getQ();
        cout<<endl<<"= operator called "<<this->a<<" "<<this->b;
    }
    void showItems()
    {
        cout<<endl<<"a: "<<a<<" "<<"b: "<<b<<endl;
    }
};

int main()
{
    Item obj;
    obj.showItems();
    Product Product_obj(9,10);
    cout<<"\n__________\n";
    obj=Product_obj;//assignment of product object to Item Object
    cout << "\n__________\n";
    obj.showItems();

    cout<<"\n______call to conversion constructor_____\n";
    Item new_obj=Product_obj;


}
