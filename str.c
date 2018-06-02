#include<stdio.h>
#include<string.h>
int main()
{
char a[5][20]={"india","telen","ap"},b[5][20]={"delhi","hyd","amar"},c[100];
int i,len;
printf("enter the string");
scanf("%s",c);
for(i=0;i<3;i++)
{
if(strcmp(c,a[i])==0)
printf("capital is %s",b[i]);
}
}



