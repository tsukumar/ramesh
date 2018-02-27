#include <stdio.h>
#include<string.h>
void main()
{
   char s1[50], s2[50], i, j;
   printf("\nEnter first string: ");
   scanf("%s",s1);
   printf("\nEnter second string: ");
   scanf("%s",s2);
  
   for(i=0; s1[i]!=NULL; ++i); 
 
   
   for(j=0; s2[j]!=NULL; ++j, ++i)
   {
      s1[i]=s2[j];
   }
  
   printf("\nOutput: %s",s1);
   
}
