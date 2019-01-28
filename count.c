#include<stdio.h>
#include<conio.h>
void main()
{
int a,i=0;
clrscr();
scanf("%d",&a);
while(a>0)
{
i++;
a=a/10;
}
printf("%d",i);
getch();
}
