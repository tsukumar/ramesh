#include <stdio.h>
 
void main()
{
    int a,b,c, temp, digit;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("enter");
    scanf("%d",&b);
    printf("before swapping");
    printf("%d",a);
    printf("%d",b);
    temp=a;
    a=b;
    b=temp;
    printf("after swap");
    printf("%d\n",a);
    printf("%d",b);
}
