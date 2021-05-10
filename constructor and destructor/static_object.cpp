
#include <iostream>
class Test
{
public:
	Test()
	{
		std::cout << "Constructor is executed\n";
	}
	~Test()
	{
		std::cout << "Destructor is executed\n";
	}
};
void myfunc()
{
	static Test obj;//static Object
} // Object obj is still not destroyed because it is static

int main()
{
	std::cout << "main() starts\n";
	myfunc(); // Destructor will not be called here
	std::cout << "main() terminates\n";
	return 0;
}
