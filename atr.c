#include<stdio.h>
int main()
{
int i,sum=0,a[100],n;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
a[i]=i*i*i;
}
for(i=0;i<n;i++)
{
printf("the array is %d\n",a[i]);
}
}

