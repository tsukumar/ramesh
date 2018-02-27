#include<stdio.h>
#include<string.h>
int main()
{
	int i,a;
	char c[5];
	printf("enter the string:");
		scanf("%s",&c);
	printf("enter how much time:");
	scanf("%d",&a);

	for(i=1;i<=a;i++)
	{
	 
		printf("%s \n",c);
	}
	return 0;
}
