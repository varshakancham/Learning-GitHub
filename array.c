#include<stdio.h>
int main()
{
int arrays[20],i,k,n;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter elements");
scanf("%d",&arrays[i]);
}
printf("enter the index of the element to be deleted\n");
scanf("%d",&k);
for(i=k;i<n;i++)
arrays[i]=arrays[i+1];
for(i=0;i<n-1;i++)
printf("the array is %d\n",arrays[i]);
}

