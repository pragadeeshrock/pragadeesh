#include<stdio.h>
#include<conio.h>
void main()
{
int a,temp,sum=0,rem;
clrscr();
scanf("%d",&a);
temp=a;
while(a>0)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}
if(sum==temp)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
