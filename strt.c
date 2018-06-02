#include<stdio.h>
int main()
{
int i,j,count1=0,count2=0,k;
char a[100],b[100],c[100];
printf("enter string");
scanf("%[^\n]s",a);
for(i=0;a[i]!=' ';i++)
{
count1++;
b[i]=a[i];
}
b[i]='\0';
k=0;
for(i=(count1+1);a[i]!=' ';i++)
{
count2++;
c[k]=a[i];
k++;
}
c[k+1]='\0';
printf("%s %s",c,b);
}




