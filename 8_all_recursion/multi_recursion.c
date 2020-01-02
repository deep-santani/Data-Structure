//multiplication using recursion//
#include<stdio.h>
int multi(int a,int b);
int main()
{
    int a,b,x;
    printf("enter value of a & b\n");
    scanf("%d%d",&a,&b);

    x=multi(a,b);
    printf("\nx=%d",x);

}
int multi(int a,int b)
{
    int m;
    if(a==0 || b==0)
        return 0;
    else if(a==1)
        return b;
    else if(b==1)
        return a;
    else
        m=a+multi(a,b-1);
        return m;
}
