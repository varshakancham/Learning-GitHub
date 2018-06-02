#include<stdio.h>
int crazynumber(int a)
{
if(a<=1)
return 1;
if(a%2==0)
return(3+crazynumber(a/2));
return(1+crazynumber((a-1)/2));
}
int main(void)
{
printf("%d",crazynumber(19));
return 0;
}
