#include<stdio.h>
#include<string.h>
int main()
{
int i,count=0;
char a[100];
printf("enter:");
scanf("%[^\n]s",a);
{
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
count++;
}
printf("the total number of word is%d",count+1);
}
return 0;
}
