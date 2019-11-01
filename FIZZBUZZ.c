#include<stdio.h>
int main()
{
int n;
printf("enter the no");
scanf("%d",&n);
if(n%3==0)
 if(n%5==0)
{
printf("fizz buzz");
}
 else
{
printf("fizz");
}
else if(n%5==0)
{
printf("buzz");
}
else
{
printf("no is invalid");
}
return 0;
}
