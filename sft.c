#include<stdio.h>
int main()
{
char a[100];
int i,n,num;
printf("enter string");
scanf("%s",a);
printf("enter number");
scanf("%d",&num);
for(i=0;a[i]!='\0';i++)
a[i]=a[i]+num;
printf("%s",a);
}

