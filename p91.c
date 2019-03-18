#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c=0,i=0;
printf("Enter the value:");
scanf("%d",&a);
while(a>0)
{
b=a%2;
c=c+(b*pow(10,i));
a=a/2;
i++;
}
printf("the binary value is:%d",c);
getch();
}
