#include<bits/stdc++.h>
using namespace std;
#define mysizeof(a) ((char*)(&a+1)-(char*)(&a))
int main()
{
    char s[]="hrishikesh Arun Bhagat";
    char *str=strtok(s," ");
    while(str!=NULL)
    {
        cout<<str<<endl;
        str=strtok(," ");
//        if(str!=NULL)
//
//        else
//            break;
    }


}
// C/C++ program for splitting a string
// using strtok()
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char str[] = "Geeks for Geeks";
//
//	// Returns first token
//	char *token = strtok(str, " ");
//
//	// Keep printing tokens while one of the
//	// delimiters present in str[].
//	while (token != NULL)
//	{
//		printf("%s\n", token);
//		token = strtok(NULL, " ");
//	}
//
//	return 0;
//}

