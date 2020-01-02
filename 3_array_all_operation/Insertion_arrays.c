#include<stdio.h>
int main()
{
    int a[100],i,n,pos,value,temp;
    printf("enter n of array element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n a[%d]:",i);
        scanf("%d",&a[i]);
    }
    printf("enter pos and value");
    scanf("%d%d",&pos,&value);
    for(i=pos-1;i<n+1;i++)
    {
        temp=value;
        value=a[i];
        a[i]=temp;

    }
    for(i=0;i<n+1;i++)
    {
        printf("\na[%d]=%d",i,a[i]);
    }
}
