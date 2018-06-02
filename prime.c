#include<stdio.h>
int main()
{
int m,i,j,temp,n;
printf("enter order of array");
scanf("%d%d",&m,&n);
int arr[m][n];
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
scanf("%d",&arr[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<n-1;j++)
{
if(arr[i][j]>arr[i][j+1])
{
temp=arr[i][j];
arr[i][j]=arr[i][j+1];
arr[i][j+1]=temp;
}
}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("new array is %d\n",arr[i][j]);
}
}






