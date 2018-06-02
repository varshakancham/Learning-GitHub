#include<stdio.h>
#include<math.h>
float octal(int num);
float binary(int num);
int main()
{
int num;
char choice;
printf("enter num");
scanf("%d",&num);
printf("enter choice");
scanf(" %c",&choice);
switch(choice)
{
case 'o':printf("%f",octal(num));break;
case 'b':printf("%f",binary(num));break;
default :printf("invalid input");break;
}
}
float octal(int num)
{
int dig,k=0;
float rev=0;
while(num>0)
{
dig=num%8;
num=num/8;
rev=rev+(dig*pow(10,k));
k++;
}
return(rev);
}
float binary(int num)
{
int dig,k=0;
float rev=0;
while(num>0)
{
dig=num%2;
num=num/2;
rev=rev+(dig*pow(10,k));
k++;
}
return(rev);
}
