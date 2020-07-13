#include<iostream>
using namespace std;
/*
To pass command line arguments, we typically define main() with two arguments : 
first argument is the number of command line arguments and second is list of command-line arguments.

int main(int argc, char *argv[]) { }
    or
int main(int argc, char **argv){/* ... *}

Properties of Command Line Arguments:

They are passed to main() function.
They are parameters/arguments supplied to the program when it is invoked.
They are used to control program from outside instead of hard coding those values inside the code.
argv[argc] is a NULL pointer.
argv[0] holds the name of the program.
argv[1] points to the first command line argument and argv[n] points last argument.

 */
int main(int count,char *ch[])
{
        cout<<"\n\n\n\nCommand line arg cnt: "<<count<<" name of program "<<ch[0]<<"\n\n\n";
}