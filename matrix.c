#include<stdio.h>
int main()
{
int m,i,j,count1=0,count2=0;
int arr[10][20];
printf("enter order of matrix");
scanf("%d",&m);
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",arr[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;i<m;j++)
{
if((i==j)&&(arr[i][j]!=0))
count1++;
}
}	
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if((i!=j)&&(arr[i][j]=!0))
count2++;
}
}
if((count1==1)&&(count2==0))
printf("it is diagonal matrix");
}

