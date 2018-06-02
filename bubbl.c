#include<stdio.h>
#include<string.h>
int main()
{
char a[100],temp;
int i,j,len;
printf("enter string");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len-1;i++)
{
for(j=0;j<len-1;j++)
{
if(a[j+1]<a[j])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
for(i=0;i<len;i++)
printf("%c",a[i]);
}

