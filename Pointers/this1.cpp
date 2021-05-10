#include <iostream>
using namespace std;

class Test
{
private:
    int x;
    int y;

public:
    Test(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    /* Reference to the calling object can be returned */
    Test& setX(int a)//if we return *this then we will get different result
    {
        x = a;
        cout<<"\nfor a: "<<this;
        return *this;
    }
    /* Reference to the calling object can be returned */
    Test& setY(int b)
    {
        y = b;
        cout<<"\nfor b: "<<this;
        return *this;
    }
    void print() { cout << "\nx = " << x << " y = " << y << endl; }
};

int main()
{
    Test obj1(5, 5);

    // Chained function calls. All calls modify the same object
    // as the same object is returned by reference
    obj1.setX(10).setY(20);

    obj1.print();
    return 0;
}
