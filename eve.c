#include<stdio.h>
int main()
{
int a[100],i,n,b[100];
printf("enter n");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
if((a[i]%2)==0)
{
b[i]=a[i];
printf("%d",b[i]);
}
}}

