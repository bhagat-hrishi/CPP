/*
The reason behind the ambiguity in above code is that the floating literals 3.5 and 5.6 are
actually treated as double by the compiler.
As per C++ standard, floating point literals (compile time constants) are treated as double unless
explicitly specified by a suffix
Since compiler could not find a function with double argument and got confused
if the value should be converted from double to int or float.
*/
#include<iostream>
using namespace std;
void test(float s,float t)
{
	cout << "Function with float called ";
}
void test(int s, int t)
{
	cout << "Function with int called ";
}
int main()
{
	test(3.5, 5.6);
	return 0;
}
/*
We can simply tell the compiler that the literal is a float and NOT double by providing suffix f.
#include<iostream>
using namespace std;
void test(float s,float t)
{
	cout << "Function with float called ";
}
void test(int s,int t)
{
	cout << "Function with int called ";
}
int main()
{
	test(3.5f, 5.6f); // Added suffix "f" to both values to
					// tell compiler, it's a float value
	return 0;
}

*/
