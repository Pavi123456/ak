#include<stdio.h>
int main()
{
int a,b;
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("the swapping value is%d%d\n",a,b);
return 0;
}
