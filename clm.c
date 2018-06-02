#include<stdio.h>
int main()
{
int i,j,newindex,high,low,a[3][3],m,new;
printf("enter elements");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<3;i++)
{
low=1000;
for(j=0;j<3;j++)
{
if(a[i][j]<low)
{
low=a[i][j];
newindex=j;
}
}
high=low;
for(m=0;m<3;m++)
{
if(a[m][newindex]>high)
{
high=a[m][newindex];
new=m;
}
}
if(high==low)
printf("the batsman0%d whose score is %d",(new+1),high);
}  
}
