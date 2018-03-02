#include<stdio.h>
void main()
{
	int n,i,a=2,b=1,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	b=b*a;
		if(b==n)
		{
			c=1;
			break;
		}
		if(b>n)
		break;
	}
	if(c==1)
        printf("yes");
	else
		printf("no");
}
