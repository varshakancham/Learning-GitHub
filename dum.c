#include<stdio.h>
#include<math.h>
float sum(int n);
int main()
{
int n;
float z;
printf("enter number");
scanf("%d",&n);
z=sum(n);
printf("%f",z);
}
float sum(int n)
{
float sum=0;
int fact=1,i,j;
for(i=1;i<=n;i++)
{
for(j=1;j<=i+1;j++)
{
fact=fact*j;
}
sum=sum+(pow(2,i)/fact);
}
return(sum);
}

