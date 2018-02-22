#include<stdio.h>
void main()
{
char s[2454];
int A,i,count=0;
printf("Enter the string");
scanf("%s",s);
A=strlen(s);
for(i=0;i<A;i++)
{
  if(s[i]=='@'||s[i]=='*'||s[i]=='.'||s[i]=='#'||s[i]=='&'||s[i]=='^'||s[i]=='$')
  {
    count=count+1;
  }
}
printf("Special character:%d",count);

}


