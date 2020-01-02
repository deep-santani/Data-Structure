#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a,b;
    a=5;
    b=10;
    swap(&a,&b);
    printf("a=%d,b=%d",a,b);
}
void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
