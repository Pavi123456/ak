#include<stdio.h>
#include<string.h>
int main()
{
char b[10];
scanf("%s",&b);
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",b[i]);
}
return 0;
}
