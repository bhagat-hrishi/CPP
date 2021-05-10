#include <stdio.h>
#define mysizeof(a) (char*)((&a)+1)-(char*)(&a)
void add(int a, int b)
{
	printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
	printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
	printf("Multiplication is %d\n", a*b);
}

void fun()
{
	printf("\n\n fun called\n");
}

int main()
{
	//Example 1
	// fun_ptr_arr is an array of function pointers
	void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
	unsigned int ch, a = 15, b = 10;

	printf("\n\nSize of for array: %d\n\n",(mysizeof(fun_ptr_arr))/(mysizeof(fun_ptr_arr[0])));

	printf("Enter Choice: 0 for add, 1 for subtract and 2 "
			"for multiply\n");
	scanf("%d", &ch);

	if (ch > 2) return 0;

	(*fun_ptr_arr[ch])(a, b);

	//Example 2

	void (*ptr[])() = {fun, fun, fun, fun};
	for (int i = 0; i < 4; i++)
		ptr[i]();

	return 0;
}
