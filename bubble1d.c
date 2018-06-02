#include<stdio.h>
int main()
{
int i,j,m,temp;
printf("enter the order of matrix");
scanf("%d",&m);
int arr[m];
printf("enter elements");
for(i=0;i<m;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<m-1;i++)
{
for(j=0;j<(m-i-1);j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
for(i=0;i<m;i++)
printf("the array in descending order is%d\n",arr[i]);
}


