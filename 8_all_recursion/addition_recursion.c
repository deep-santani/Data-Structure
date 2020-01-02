//addition using recursion//
#include<stdio.h>
int add(int a,int b);
int main()
{
    int a,b,x;
    printf("enter value of a & b\n");
    scanf("%d%d",&a,&b);

    x=add(a,b);
    printf("\nx=%d",x);

}
int add(int a,int b)
{
    int m;
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
        m=1+add(a,b-1);
        return m;
}
