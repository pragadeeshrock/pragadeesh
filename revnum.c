#include<stdio.h>
#include<conio.h>
void main()
{
int a,sum=0,rem;
clrscr();
scanf("%d",&a);
while(a>0)
{
rem=a%10;
sum=sum*10+rem;
a=a/10;
}
printf("%d",sum);
getch();
}
