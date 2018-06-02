#include<stdio.h>
#include<string.h>
int main()
{
char arr[100],b[100];
int c[100]={0};
int i,j,n;
scanf("%s",arr);
scanf("%s",b);
for(i=0;i<3;i++)
c[i]=(arr[i]+b[i]);
for(i=0;i<3;i++)
printf("%c\n",c[i]);
}

