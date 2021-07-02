
#include<iostream>
#include<stdio.h>
using namespace std;
//In C++, class variables are initialized in the same order as they appear in the class declaration.

// Second: Change the order of initialization.
class Test {
private:
	int y;
	int x;
public:
	Test() : x(y-10+printf("\nI am 2nd\n")), y(20+printf("\nI am 1st\n")) //this "\n I am 1st \n" add 10
	{
	}
	void print();
};


void Test::print()
{
cout<<"x = "<<x<<" y = "<<y;
}

int main()
{
	Test t;
	t.print();
	//getchar();
	return 0;
}
