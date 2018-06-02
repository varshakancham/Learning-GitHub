#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10};
int *p1=&a[4];
int *p2=a;
printf("%d\n",*p1*2);
printf("%u\n",p2-p1);
printf("%d\n",(*p2)++);
printf("%d\n",*p1+1);
printf("%u\n",p2--);
}
