#include<stdio.h>
void main()
{
int a[50],i,c,min,max;
printf("enter the no of elements");
scanf("%d",&c);
printf("enter array elements");
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
max=a[0];
for(i=0;i<c;i++)
{
if(a[i]<min)
{
min=a[i];
}
if(a[i]>max)
{
max=a[i];
}
}
  printf("max = %d",max);
   printf("min = %d",min);
}
