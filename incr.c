#include<stdio.h>
int main()
{
int i=0,a[100],n,flag=0,t=0,num,dig,count=0;
printf("enter number");
scanf("%d",&num);
while(num>0)
{
dig=num%10;
a[i]=dig;
num=num/10;
i++;
count++;
}
for(i=0;i<(count-1);i++)
{
if(a[i]<a[i+1])
flag++;
else
t++;
}
if(flag==(count-1))
printf("decre");
else
if(t==(count-1))
printf("incre");
else
if((flag<(count-1))&&(t<(count-1)))
printf("bounc");
}



