#include <stdio.h>
void main()
{
    int i, n;
   int arr[100];
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);
    }
    for(i = 1; i < n; ++i)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %d", arr[0]);

   
}
