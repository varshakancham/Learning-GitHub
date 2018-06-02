#include<stdio.h>
int function1(int);
int function2(int);
int function1(int a)
{
if(a==1)
return 0;
int returnvalue=1;
returnvalue+=function2(a-1);
return returnvalue;
}
int function2(int a)
{
if(a==1)
return 0;
int returnvalue=2;
returnvalue+=function1(a-1);
return returnvalue;
}
int main(void)
{
printf("%d",function1(4));
return 0;
}
