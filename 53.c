#include <stdio.h>
 
void main()
{
    long a, temp, digit, sum = 0;
    printf("Enter the number \n");
    scanf("%d", &a);
    temp = a;
    while (a > 0)
    {
 digit =a% 10;
sum  = sum + digit;
a =a/ 10;
    }
    printf("Sum of the digits %ld = %ld\n", temp, sum);
}
