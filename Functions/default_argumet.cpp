/*
1)During calling of function,
arguments from calling function to called function are copied from left to right.
2)Once default value is used for an argument in function definition,
 all subsequent arguments to it must have default value.
 i.e default arguments are assigned from right to left
 You can't declare like this
int sum(int x, int y, int z=0, int w)
*/
#include<iostream>
using namespace std;

int sum(int x=0, int y=0, int z=0, int w=0)
{
    cout<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z<<endl<<"W:"<<w;
	return (x + y + z + w);
}

int main()
{
    //here 10 and 15 are copied to x and y
	cout << "\nSUM: "<<sum(10, 15) << endl;
	return 0;
}
