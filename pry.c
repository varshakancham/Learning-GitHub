struct ear
{
int empid;
char empname[100];
}e1[3],t[3];
#include<stdio.h>
#include<string.h>
int main()
{
int i,j;
printf("enter empid&empname");
for(i=0;i<3;i++)
scanf("%d%s",&e1[i].empid,e1[i].empname);
for(i=0;i<3;i++)
{
for(j=0;j<=2;j++)
{
if(strcmp(e1[i].empname,e1[j].empname)<=0)
{
char temp[100];
t[j]=e1[i];
e1[i]=e1[j];
e1[j]=t[j];



}
}}
printf("%s\n%s\n%s\n%d\n%d\n%d",t[0].empname,t[1].empname,t[2].empname,t[0].empid,t[1].empid,t[2].empid);
}
