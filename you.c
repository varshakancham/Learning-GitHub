#include<stdio.h>
int main()
{
int arr[100],i,lar1,lar2,j,n,temp;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
lar1=arr[0];
lar2=arr[1];
if(lar2>lar1)
{
temp=lar1;
lar1=lar2;
lar2=temp;
}
for(i=2;i<n;i++)
{
if(arr[i]>lar1)
{
lar2=lar1;
lar1=arr[i];
j=lar1;
}
else
{
if(arr[i]>lar2)
lar2=arr[i];
}
}
printf(" second largest is %d and first is %d",lar2,j);
}



