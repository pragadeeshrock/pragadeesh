#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,factorial=1;
clrscr();
scanf("%d",&a);
if(a<=20)
for(i=1;i<=a;i++)
{
factorial=factorial*i;
}
printf("%d",factorial);
getch();
}
