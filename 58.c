#include <stdio.h>

void main() {
    int i,j;
   printf("enter");
   scanf("%d",&i);
   printf("enter");
   scanf("%d",&j);
    printf(" before swap%d %d\n", i,j);

    i = i^ j;
    j =i ^ j;
    i = i ^j;
    printf("after swap%d %d", i, j);
}
