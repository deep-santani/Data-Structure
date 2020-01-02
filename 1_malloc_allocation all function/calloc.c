#include<stdio.h>
int main()
{
    int *x,*p;
    int size;
    printf("please enter size of allocation:size\n");
    scanf("%d",&size);
    x=(int*)calloc(size,sizeof(int));
    for(p=x;p<x+size;p++)
    {
        printf("enter value\n");
        scanf("%d",&*p);
    }
}

