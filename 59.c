#include<stdio.h>
int main()
{
int a[20]={1,2,3,4,5,13,7,8,9,10},b,i;
b=a[0];
for(i=1;i<=10;i++)
{
if(a[i]>b)
{
b=a[i];
}
}
printf("the largest number is%d\n",b);
return 0;
}
