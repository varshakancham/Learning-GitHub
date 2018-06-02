#include<stdio.h>
int main()
{
int i,a[100],n,k,newindex,d;
printf("enter number of elements");
scanf("%d",&n);
printf("enter elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element random");
scanf("%d",&k);
for(i=0;i<n;i++)
{
if(a[i]==k)
newindex=i;
}
for(i=newindex;i<n;i++)
a[i]=a[i+1];
printf("%d",newindex);
for(i=0;i<n-1;i++)
printf("%d\n",a[i]);
}


