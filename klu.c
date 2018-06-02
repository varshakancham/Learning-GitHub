#include<stdio.h>
int function(int*p);
int n;
int main()
{
int diff,a[100],i;
printf("enter elements");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
diff=function(a);
printf("%d",diff);
}
int function(int *p)
{
int lar,low,i,diff;
lar=low=*(p);
for(i=1;i<n;i++)
{
if(*(p+i)>lar)
lar=*(p+i);
if(*(p+i)<low)
low=*(p+i);
}
printf("%d\n%d",lar,low);
diff=lar-low;
return(diff);
}



