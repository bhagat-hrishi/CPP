#include<bits/stdc++.h>
using namespace std;
/*
1)if class contain at least 1 pure virtual function the this class
is called as abstract class and we cannot create Object of abstract class
2) if child class extends abstract class then it need to override that pure
pure virtual function ( provide implementation) and if it extend class and does not provide
implementation then class has to declare that function as pure virtual function

3)abstract class can have constructor

4)In C++, an interface can be simulated by making all methods as pure virtual.
 In Java, there is a separate keyword for interface.

5)we can create reference variable and pointer of abstract class

6)static function cannot be virtual
    Static functions are class specific and may not be called on objects.
    Virtual functions are called according to the pointed or referred object


*/
class Person
{
    int a;
public:
    Person()
    {
        cout<<"abstract class constructor"<<endl;
    }
    void non_virtual()
    {
        cout<<"I am not a virtual"<<endl;
    }
    virtual string getName()=0;//pure virtual function
    virtual void   setName(string )=0;//pure virtual function
    void normalmethod()
    {
        cout<<"I am normal method of this class";
    }
};

//providing body to pure virtual function

//https://stackoverflow.com/questions/2089083/pure-virtual-function-with-implementation
string Person::getName()
{
    return "Hi I am from pure virtual function";
}
class Faculty : public Person
{
    string name;
public:
    Faculty()
    {
        //default constructor
    }
    Faculty(string name)
    {
        this->name=name;

    }
    string getName()
    {
        return this->name;
    }
    //class extend abstract class but not provide implementation so
    //it has to declare function as pure virtual function and we cannot
    //create Object of this class
    virtual  void setName(string)=0;

};
class CSE:public Faculty
{
    string nm;
public:
    void setName(string nm)
    {
        this->nm=nm;
    }
    string getName()
    {
        cout<<"\ncalling abstract class function\n";
        cout<<Person::getName()<<endl;
        cout<<"__________\n";
        return this->nm;
    }
};
int main()
{
    string s="CSE";
   CSE obj;
   obj.setName(s);
   cout<<obj.getName()<<endl;

//   Faculty obj;//error as we cannot create Object of abstract class
   Person *p=new CSE();//we can create pointer of abstract class
   Person &_ref=obj;//we can have reference variable of abstract class

//   Person obj1;//error cannot create Object of abstract class

}
