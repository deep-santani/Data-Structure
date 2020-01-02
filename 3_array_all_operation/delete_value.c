#include<stdio.h>
int main()
{
    int a[10],i,j,value,n,count=0,c;
    printf("enter size of arrays");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("enter value");
    scanf("%d",&value);
    for(i=0;i<n;)
    {
        if(a[i]==value)
        {
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];

            }
        a[n-1]=0;
        n--;count++;
        }
        else
        {
            i++;
        }

    }
    for(c=0;c<n+count;c++)
    {
        printf("\na[%d]=%d",c,a[c]);
    }
}
