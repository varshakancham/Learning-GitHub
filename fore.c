#include<stdio.h>
int g;
void test()
{
int g=100;
static int L=9;
printf("inside %d %d\n",++g,++L);
}
void main()
{
printf("at begin %d",g);
test();
printf("inside main %d",g++);
test();
printf("onside main %d",g++);
test();
printf("end %d",g);
}
