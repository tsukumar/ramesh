#include<stdio.h>
void main()
{
    int n;
    int count=0;
    printf("enter the value :");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count=count+1;
        
    }
    printf("the no you are print is%d",count);
}
