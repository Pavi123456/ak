#include<stdio.h>
int main()
{
int n,a,b=0;
scanf("%d",&n);
while(n>0)
{
a=n%10;
b=b+a;
n=n/10;
}
printf("the value is%d\n",b);
return 0;
}
