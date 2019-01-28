#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,p=1;
clrscr();
scanf("%d",&a);
for(i=1;i<=5;i++)
{
p=p*a;
printf("%d\t",p);
}
getch();
}
