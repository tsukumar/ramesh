#include<stdio.h>
void main()
{
int a[50],i,c,min,max,b,sum=0,s;
printf("enter the no of elements");
scanf("%d",&c);
printf("enter array elements");
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
sum=sum+a[i];
}
b=sum/c;
printf("%d",b);
}
