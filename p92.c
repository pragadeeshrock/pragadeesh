#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c=0,i=0;
printf("Enter the value:");
scanf("%d",&a);
while(a>0)
{
b=a%10;
c=c+(b*pow(2,i));
a=a/10;
i++;
}
printf("the binary value is:%d",c);
getch();
}
