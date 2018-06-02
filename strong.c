#include<stdio.h>
int main()
{
int sum=0,j,low,up,i,k,dig,f,count=0;
printf("enter limits lower and upper");
scanf("%d%d",&low,&up);
for(j=low;j<=up;j++)
{
k=j;
while(k>0)
{
dig=k%10;
f=1;
for(i=1;i<=dig;i++)
f=f*i;
sum=sum+f;
k=k/10;
}
if(sum==j)
printf("it is strong num -%d",j);
sum=0;
}
}


