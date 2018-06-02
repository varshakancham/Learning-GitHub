#include<stdio.h>
int main()
{
int x[2][2][2]={{{},{}},{{},{}}};
printf("%d\n%d\n%d\n%d\n%d",x[0][1][0],x[0][1][1],x[1][0][0],x[1][0][1],x[1][1][0]);
}
