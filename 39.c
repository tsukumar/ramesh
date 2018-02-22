#include <stdio.h>
  void main()
  {
    int d[10];
    int j,a;
    
    printf("Enter ten values:");
    for (j = 0; j < 10; j++)
    {
    scanf("%d", &d[j]);
    }
a = d[0];
    for (j = 0; j < 10; j++) 
    {
   if (d[j] > a) 
   {
   a= d[j];
    }
    }
    printf("Greatest of ten numbers is %d",a);
  }
