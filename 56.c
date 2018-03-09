#include <stdio.h>
#include<string.h>
void main() 
{
	char c[100];
	int b=0,n=0;
	scanf("%s",c);
	int i,m;
	m=strlen(c);
	for(i=0;i<m;i++)
	{
		if(('a'<=c[i] &&c[i]<='z') || ('A'<=c[i] && c[i]<='Z'))
		{
		b=1;
		}
		if('0'<=c[i] && c[i]<='9')
		{
			n=1;
		}
	}
	if(n==1 && b==1)
	{
		printf("yes");
	}
	else
		printf("no");
}
