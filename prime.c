#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,f;
clrscr();
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("prime number");
}
else
{
printf("not prime number");
}
getch();
}
