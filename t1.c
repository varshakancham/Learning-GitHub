#include<stdio.h>
int main()
{
int m,i,j,z,temp;
printf("enter order");
scanf("%d",&m);
int a[m][m],b[m][m];
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if(a[i][j]<b[i][j])
temp=a[i][j];
a[i][j]=b[i][j];
b[i][j]=temp;
}
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
printf("%d  ",a[i][j]);
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
printf("%d  ",b[i][j]);
printf("\n");
}
}
