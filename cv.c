#include<stdio.h>
#include<string.h>
int main()
{
char ch[]="Ins\0ia";
printf("%s\n",ch);
printf("%d\n",sizeof(ch));
printf("%d\n",strlen(ch));
printf("%s\n",ch+1);
printf("%0.2s\n",ch);
}
