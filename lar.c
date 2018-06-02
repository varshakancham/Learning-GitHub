#include<stdio.h>
main()
{
int num,lar=0;
do
{
printf("enter num");
scanf("%d",&num);
if(num>100)
printf("invalid input");
else
if((num<100)&&(num>lar))
lar=num;
printf("largest is %d",lar);
}
while(num>0);
}

