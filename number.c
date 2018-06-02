#include<stdio.h>
main()
{
call(5);
}
void call(int x)
{
if(x>0)
{
printf("%d",x);
x--;
call(x);
}
}

