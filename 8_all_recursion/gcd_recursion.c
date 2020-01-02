//gcd by recursion//
#include<stdio.h>
int gcd(int a,int b);
int main()
{
    int a,b,x;
    printf("enter value of a & b\n");
    scanf("%d%d",&a,&b);

    x=gcd(a,b);
    printf("\nx=%d",x);

}
int gcd(int a,int b)
{
    if(b<=a && (a%b)==0)
        return b;
    else if(a<b)
    {
        gcd(b,a);
    }
    else
    {
        gcd(b,a%b);
    }
}
