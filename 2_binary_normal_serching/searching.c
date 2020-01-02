//searching//
#include<stdio.h>
int main()
{
    int a[10],i,n,key,flag;
    printf("enter size of array");
    scanf("%d",&n);
    printf("\n enter element of array");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter element which you want to find=");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("its found at %d position",i+1);
            break;
        }
        else
        {
            flag=0;
        }

    }
    if(flag==0)
    {
        printf("its not found");
    }
}
