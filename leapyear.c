#include<stdio.h>
int main()
{
int n;
printf("enter the year");
scanf("%d",&n);
if(n%4==0)
printf("\n%d is leap year",n);
else
printf("\n%d is not a leap year",n);
return 0;
}
