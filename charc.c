#include<stdio.h>
#include<conio.h>
void main()
{
char a[100];
int i,len=0,vowel,consonant;
scanf("%s",&a);
vowel=0;
consonant=0;
for(I=0;a[i]!='\0';i++)
{
if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
{
if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
{
printf("vowel");
}
else
{
printf("consonant");
}
}
else
{
printf("invalid");
}
}
getch();
}
