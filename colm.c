#include<stdio.h>
int main()
{
int a[100][100],i,j,sum=0,m;
printf("enter m");
scanf("%d",&m);
for (i=0;i<m;i++)
{
for(j=0;j<m;j++)
scanf("%d",&a[i][j]);
}
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
sum=sum+a[j][i];
printf("%d\t",sum);
sum=0;
}
}

