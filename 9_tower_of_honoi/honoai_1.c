#include<stdio.h>
int hono(int n,int a,int c,int b);
int main()
{
    char a='a',b='b',c='c';
    int n,x;
    printf("enter number of rings::");
    scanf("%d",&n);
    x=hono(n,a,c,b);
}
int hono(int n,int a,int c,int b)
{
    if(n==1)
    {
        printf("\ndisk %d is moved from %c to %c",n,a,c);
        return(1);
    }
    else
    {
        hono(n-1,a,b,c);
        printf("\ndisk %d is moved from %c to %c",n,a,c);
        hono(n-1,b,c,a);
    }
}
