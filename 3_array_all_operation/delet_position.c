#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp,pos;
    printf("enter n:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("enter position");
    scanf("%d",&pos);
    for(i=0;i<n;i++)
    {
        if(i+1==pos)
        {
            for(j=pos;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    a[n-1]=0;
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

}
