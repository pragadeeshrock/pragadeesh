#include<stdio.h>
#include<conio.h>
void main()
{
int j,i,f,a,b;
clrscr();
scanf("%d%d",&a,&b);
for(j=a+1;j<b;j++)
{
f=0;
for(i=2;i<j/2;i++)
{
if(j%i==0)
{
f=1;
break;
}
}
if(f==0)
{
printf("%d",j);
}
getch();
}
