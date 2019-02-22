
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,c,d=0;
char a[50],b[50];
for(i=0;a[i]!='\0';i++)
scanf("%s",&a[i]);
for(i=0;a[i]!='\0';i++)
{
if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u')
{
b[i]=a[i];
d++;
}
}
for(j=d;j>=0;j--)
{
printf("%c",b[j]);
}
}
