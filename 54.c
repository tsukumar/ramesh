#include <stdio.h>
 
void main()
{
    long a, temp, digit;
    printf("Enter the number \n");
    scanf("%d", &a);
    if(a%2==0)
    {
      (temp=a-2);
    }
    else
    {
     (temp=a-1);
    }
    printf("%d",temp);
}
