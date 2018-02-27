#include <stdio.h>
#include<string.h>
void main()
{
	char s[50],s1[50];
	int a,b;
	printf("enter the string1:");
	scanf("%s",s);
	printf("enter the string2:");
	scanf("%s",s1);
	a=strlen(s);
b=strlen(s1);
	if(a>b)
	{
		printf("\n%s",s);
	}
	else if(b>a)
	{
		printf("\n%s",s1);
	}
	else
	{
		printf("\n %s",s1);
	}

}
