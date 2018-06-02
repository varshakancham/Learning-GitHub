#include<stdio.h>
void main()
{
int a[3][3]={0,0,0,0,0,0,0,0,0};
printf("Welcome to tictac toe\n");
int i,j,k;
int a1,b,c;
for(a1=0;a1<3;a1++)
{
for(b=0;b<3;b++)
{
printf("%d",a[a1][b]);
}
printf("\n");
}
for(k=0;k<5;k++)
{
printf("enter the row and the column number\n");
scanf("%d%d",&i,&j);
printf("enter 1 or 0\n");
int a2;
scanf("%d",&a2);
for(a1=0;a1<3;a1++)
{
for(b=0;b<3;b++)
{
printf("%d",a[a1][b]=a2);
}
printf("\n");
}
}

}
