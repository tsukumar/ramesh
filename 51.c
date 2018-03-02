#include <stdio.h>

void main()
{
	int i,n;
	char c[10];
	scanf("%s",c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		printf("%c\t",c[i]);
	}
}
