#include<stdio.h>
void fun(int);
void main()
{
fun(0);printf("\n");
fun(3);printf("\n");
fun(6);printf("\n");
}
void fun(int n)
{
if(n<=1)
printf("%d",n);
else
{
fun(n/2);
printf("%d",n%2);
}
}

