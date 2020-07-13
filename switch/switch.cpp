also add one property of switch()
#‎include‬ <stdio.h>
void main()
{
int ch;
printf("enter a value btw 1 to 2:");
scanf("%d", &ch);
switch (ch, ch + 1)
{
case 1:
printf("1\n");
break;
case 2:
printf("2");
break;
}
}

Here
COMMA operator play important role.Comma (,) operator has associative
from left to right and right most is considered final value..So within
switch "ch+1" will be consider final value......For example if u take
i/p ch=1 then switch(1,2)=switch(2) and print "2"....That means always
(i/p+1) case will be executed .


#include <stdio.h>
int main(void) {
int x = 4;
switch(x)
{
default : printf("I am in default\n");
case 1: printf("I am in case 1\n");
break;
case 2: printf("I am in case 2\n");
break;
}
return 0;
}
//for Default case also we need to put break; right? else all the following statements will be executed
//By this program you can show that there is no by default break after
// default case. (Hope it is useful).
