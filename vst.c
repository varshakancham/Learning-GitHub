#include<stdio.h>
int main()
{
int low=100000,num;
do
{
printf("enter marks");
scanf("%d",&num);
if(num<0)
break;
else
if(num<low)
low=num;
}
while(num>0);
printf("the lowest is %d",low);
}

