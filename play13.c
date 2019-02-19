#include<Stdio.h>
#include<conio.h>
void main()
{
int a,rem,sum=0;
scanf("%d",&a);
while(a>0)
{
rem=a%10;
sum=sum+(rem*rem);
a=a/10;
}
getch();
}
