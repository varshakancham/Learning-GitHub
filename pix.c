struct emp
{
int sal;
char name[100];
}e1[40];
void largest(struct emp[]);
#include<stdio.h>
int n;
int main()
{
int i;
printf("enter n");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d%s",&e1[i].sal,e1[i].name);
largest(e1);
}
void largest(struct emp e1[])
{
int lar,i,j;
char a[100];
lar=e1[0].sal;
for(i=0;i<n;i++)
{
if(e1[i].sal>lar)
{
lar=e1[i].sal;
j=i;
}
}
printf("%s",e1[j].name);
}



