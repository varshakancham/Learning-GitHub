#include<stdio.h>
int main()
{
int arr[20],i,low,n,j,k;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
low=arr[0];
for(i=0;i<n;i++)
{
if(low>arr[i])
{
low=arr[i];
j=i;
}
}
printf("the lowest is %d and its index is %d",low,j+1);
}




