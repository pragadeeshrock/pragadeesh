#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i;
scanf("%c",&a);
for(i=0;a[i]!='\0';i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
printf("alphabet");
}
else
{
printf("not alphabet");
}
}
getch();
}
