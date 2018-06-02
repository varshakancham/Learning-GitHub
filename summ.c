#include<stdio.h>
#include<math.h>
float sumate(float n);
main()
{
int n;
float z;
printf("enter number");
scanf("%d",&n);
z=sumate(n);
printf("%f",z);
}
float sumate(float n)
{
int i,j,fact;
float sim=0;
for(i=1;i<=n;i++)
{
fact=1;
for(j=1;j<=i+1;j++)
{
fact=fact*j;
}
sim=sim+(pow(2,i))/fact;
}
return(sim);
}
