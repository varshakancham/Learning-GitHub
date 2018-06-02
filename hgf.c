#include<stdio.h>
#include<math.h>
int main()
{
float sum=1;
int i,n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum+(pow(((2*i)+1),3)/pow(((2*i)+2),3));
}
printf("%f",sum);
}
