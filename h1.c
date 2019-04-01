#include<stdio.h>
void main()
{
    int n,a[30],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]!='$')
            {
                if(a[i]==a[j])
                {
                    printf("%d",a[i]);
                    a[i]='$';
                    a[j]='$';
                }
            }
            
        }
    }
}
