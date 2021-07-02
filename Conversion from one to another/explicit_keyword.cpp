#include <iostream>
using namespace std;

class Point
{
private:
    int x;

public:
    Point()
    {
        cout << "\nDefault";
    }

    /*
    If we declare following conversion constructor as explicit then
    it will stop implicit call of this constructor
    */
    //but if we remove explicit then implicit call is possible
    explicit Point(int i)
    {
        cout << "\nI am called :" << i;
        x = i;
    }
    void print()
    {
        cout << endl
             << " x = " << x;
    }
};
void fun(Point p)
{
    cout << "\nI am inside fun";
}

int main()
{
    //Explicit call to constructor
    Point t(20);
    t.print();
    cout << "\n___________\n";

    //implicit call to constructor
    t = 30; // Member x of t becomes 30 //error as explicit declared so implicit call not possible
    t.print();
    cout << "\n___________\n";

    t = (Point)78; //but if we typecast then we do not get error
    cout << "\n___________\n";

    //implicit call to constructor
    fun(90); //error as explicit declared so implicit call not possible

    return 0;
}
