#include<stdio.h>
int main()
{
int a,b,c,greatest;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
{
 if(a>c)
{
greatest=a;
}
else
greatest=c;
}
else if (b>c)
greatest=b;
else
greatest=c;
printf("\nGreatest of %d %d %d= %d",a,b,c,greatest);
return 0;
}

