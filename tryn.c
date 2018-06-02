#include<stdio.h>
#include<string.h>
int main()
{
char a[10][15];
int i,j,n;
printf("enter number of names");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%s",a[i]);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(strcmp(a[i],a[j])<=0)
{
char temp[15];
strcpy(temp,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp);
}
}
}
for(i=0;i<n;i++)
printf("%s\n",a[i]);
}
