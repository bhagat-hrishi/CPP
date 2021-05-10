#include<stdio.h>
/*
1)we can return void function from another void function
2)void can return void value
*/
void fun1()
{
    printf("I am fun1\n");
}
void fun2()
{
    printf("I am fun2\n");
    return fun1();//void function returning another void function
}
void void_function_returning_void_value()
{
    printf("\nI am void_function_returning_void_value");
    return (void)"return this";//void function returning void value
}
int main()
{
    fun2();
    void_function_returning_void_value();



}
