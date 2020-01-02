#include<stdio.h>
int main()
{
int *x;
x=(int*)malloc(2);
*x=10;
printf("*x=%d",*x);
}
