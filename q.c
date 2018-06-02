#include<stdio.h>
#include<string.h>
int main()
{
char a[100];
int i,p;
printf("enter string");
scanf("%[^\n]s",a);
p=strlen(a);
for(i=0;i<p;i++)
{
if((a[i]<'a')&&(a[i]>'z'))
a[i]=' ';
}
printf("%s",a);
}
