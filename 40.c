#include <stdio.h>
void main()
{
int i, n, a = 1,b= 1, temp;
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci Series: ");
for (i = 1; i <= n; ++i)
{
printf("%d\t ",a);
temp =a+b;
a=b;
b= temp;
}
}
