#include<stdio.h>

void main()
{
	char s[50];
	int i,j,a,l,count=0,max=0;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				count++;
			}
			if(count>max)
			{
				a=s[i];
				max=count;
			}
		}
	}
	printf("%c",r);
}
