#include<stdio.h>
#include<conio.h>
void main()
{
int i,n=0;
char a[100];
for(i=0;a[i]!='\0';i++)
{
scanf("%s",&a[i]);
n++;
}
printf("%s",n);
getch();
}

