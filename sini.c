#include<stdio.h>
#include<math.h>
int main()
{
int i,j,fact=1,x,n,f=2;
float sum=0;
printf("enter n&x");
scanf("%d%d",&n,&x);
for(i=1;i<=(2*n)-1;i+=2)
{
fact=1;
for(j=1;j<=i;j++)
fact=fact*j;
sum=sum+((pow(-1,f)*pow(x,i))/fact);
f++;
}
printf("%f",sum);
}

