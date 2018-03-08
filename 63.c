#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char s[100];
scanf("%d",&s);
for(i=0;s[i]1='0';i++)
{
if(s[i]=='0')
count++;
}
printf("the total number of word is%d",count+1);
return 0;
}
