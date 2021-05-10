
// C++ program to demonstrate
// the problem with 'bool'
#include <iostream>

using namespace std;

int main()
{
	// declaring Boolean
	// variable with true value
	bool a = true;

	for (a = 1; a <= 5; a++)
		cout << a;

	return 0;
}
/*This code will print ‘1’ infinite time because here ‘a’ is declared as ‘bool’ and it’s valid range is 0 to 1.
 And for a Boolean variable anything else than 0 is 1 (or true). When ‘a’ tries to become 2 (through a++), 1 gets assigned to ‘a’.
The condition a<=5 is satisfied and the control remains with in the loop. See this for Bool data type.*/
