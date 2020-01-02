//sparce matrix//
#include<stdio.h>
struct sparc
{
    int r,c,v;
}s[25];
int main()
{
    int a[5][5],i,j,r,c,k=0;
    printf("enter value of row and colume");
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\na[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]!=0)
            {
                s[k].r=i;
                s[k].c=j;
                s[k].v=a[i][j];
                k++;
            }
        }
    }
    printf("\nrow\tcol\tval");
    printf("\n %d\t%d\t%d",r,c,k);
    k=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(s[k].r==i && s[k].c==j)
            {
                printf("\n %d\t%d\t%d",i,j,a[i][j]);
                k++;
            }
        }
    }

}
