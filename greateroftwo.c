#include<stdio.h>
int main()
{
int a,b,greatest;;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
if(a>b)
{
greatest=a;
}
else
greatest=b;
printf("\nGreatest of %d and %d=%d",a,b,greatest);
return 0;
}
