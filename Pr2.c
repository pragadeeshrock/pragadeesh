#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
scanf("%d",&a);
if(a%2==0)
{
printf("Even");
}
else if(a%3==0)
{
printf("Odd");
}
else
{
printf("invalid");
}
getch();
}
