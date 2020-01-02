#include<stdio.h>
int main()
{
    int a[100],i,j,value,temp,n;
    printf("enter n :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%d]:",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("after sorting");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nenter value");
    scanf("%d",&value);
    for(i=0;i<n+1;i++)
    {
        if(a[i]>=value)
        {
            temp=value;
            value=a[i];
            a[i]=temp;

        }
    }
    for(i=0;i<n+1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }

}
