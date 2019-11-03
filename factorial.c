#include<stdio.h>
int main()
{
int n,i,factorial=1;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
factorial=factorial*i;
}
printf("\nFactorial of %d= %d",n,factorial);
return 0;
}
