//priority queue by array//
#include<stdio.h>
void insert(int v);
int pop();
int f=0,m=0,n=0,k=0,a[10];
int main()
{
    int c,i=0,r,v;
    while(i==0)
    {
        printf("\n1.insert\n2.remove");
        printf("\nenter your choice::");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nenter value::");
            scanf("%d",&v);
            insert(v);
            break;
        case 2:
            r=pop();
            printf("\nr=%d",r);
            break;
        default:
            printf("\n*******enter valid number*******");
        }
    }
}
void insert(int v)
{
    int max=0,j,temp=0,i;
    m++;
             if(m==1)
             {
              a[0]=v;
             }
             for(i=0;i<m-1;i++)
             {
             if(v>a[i])
             {
                for(j=i;j<m;j++)
                {
                  temp=v;
                  v=a[j];
                  a[j]=temp;
                }k++;
             }
             else
             {
                 k++;
                 a[k]=v;
             }
             }
}
int pop()
{
    int x;
    x=a[f++];
    return x;

}




