// C++ program to demonstrate
// the problem with 'short'
#include <iostream>

using namespace std;

int main()
{
	// declaring short variable
	short a;

	for (a = 32767; a < 32770; a++)
		cout << a << "\n";

	return 0;
}
    /*Will this code print ‘a’ till it becomes 32770? Well the answer is indefinite loop,
    because here ‘a’ is declared as a short and its valid range is -32768 to +32767.
     When ‘a’ tries to become 32768 through a++,
    the range is exceeded and as a result the first number from negative side of the range(i.e. -32768) gets assigned to a.
    Hence the condition “a < 32770" is satisfied and control remains within the loop.*/
