#include<stdio.h>
int gum(int,int);
int main()
{
int i,x,y;
printf("enter the value of x&y");
scanf("%d%d",&x,&y);
if(x>y)
i=gum(x,y);
else
i=gum(y,x);
printf("%d",i);
}
int gum(int a,int b)
{
int r;
do
{
r=a%b;
a=b;
b=r;
}
while(r>0);
return(a);
}


