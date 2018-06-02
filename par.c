#include<stdio.h>
#include<string.h>
int main()
{
char name1[10],rev[10];
int i,len,j;
scanf("%s",name1);
for(i=0;name1[i]!='\0';i++)
len=i;
for(i=0,j=len;j>=0;i++,j--)
rev[i]=name1[j];
rev[i]='\0';
puts(name1);
puts(rev);
if(strcmp(name1,rev)==0)
printf("it is a palindrome");
else
printf("it is not palindrome");
}

