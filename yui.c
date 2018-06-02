#include<stdio.h>
int main()
{
int x,y,dig,r=0;
printf("enter the number");
scanf("%d",&x);
while(x>0)
{
dig=x%10;
r=(r*10)+dig;
x=x/10;
}
printf("the reverse of number is %d",r);
}
