#include <stdio.h>
 
void main()
{
    int a,b,c, temp, digit;
    printf("Enter the number \n");
    scanf("%d", &a);
    printf("enter");
    scanf("%d",&b);
    c=a*b;
    if(c%2==0)
    {
    printf("even");
    }
    else
    {
        printf("odd");
    }
}
