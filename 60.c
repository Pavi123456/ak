#include<stdio.h>
int main()
{
int a,b,temp,i,n;
printf("enter the vaue",\n);

scanf("%d%d",&a,&b);
for(i=2;i<=n;i++)
temp=a+b;
a=b;
b=temp;
printf("the fibanocci number is%d",temp);
return 0;
}
