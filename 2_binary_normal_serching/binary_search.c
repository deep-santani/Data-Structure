//binary search//
#include<stdio.h>
int binsearch(int a[],int l,int h,int key);
int l,h;
int main()
{
    int a[10],i,mid,key,n,pos;
    printf("enter size of array");
    scanf("%d",&n);
    printf("\nenter element of array");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter key which u want to find=");
    scanf("%d",&key);
    h=n-1;
    l=0;
    pos=binsearch(a,l,h,key);
    if(pos==6)
    {
        printf("key not found");
    }
    else
    {
        printf("pos=%d",pos);
    }
}
int binsearch(int a[],int l,int h,int key)
{
    int mid;
    mid=(l+h)/2;
    while(l<=h)
    {
        if(key==a[mid])
            return mid;
        else if(key>a[mid])
            l=mid+1;
        else
            h=mid-1;
    }
    return(6);

}
