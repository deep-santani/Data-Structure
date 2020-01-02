#include<stdio.h>
void swap(int a,int b);
int main()
{
    int a,b;
    a=5;
    b=10;
    printf("before swaping");
    printf("\na=%d,b=%d",a,b);
    swap(a,b);
}
void swap(int a,int b)
{
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swapping");
    printf("\n a=%d b=%d",a,b);
}

