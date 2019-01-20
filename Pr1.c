#include<stdio.h>
#include<conio.h>
void main()
{ 
int a;
clrscr();
scanf("%d",&a);
if(a<0)
{
printf("Negative");
}
if(a>0)
{
printf("Positive");
}
if(a==0)
{
printf("Zero");
}
getch();
}
