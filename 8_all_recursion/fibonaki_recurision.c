//fibonaki using recursion//
#include<stdio.h>
int fibo(int n);
int main()
{
    int n,x;
    printf("enter value of n\n");
    scanf("%d",&n);

    x=fibo(n);
    printf("\nx=%d",x);

}
int fibo(int n)
{
    int x,y;
    if(n<=1)
        return(n);
    else
    {
        x=fibo(n-1);
        y=fibo(n-2);
        return(x+y);
    }
}
