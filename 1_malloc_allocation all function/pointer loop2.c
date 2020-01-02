#include<stdio.h>
int main()
{
    int *x,*p;
    int size ,ans;
    printf("please enter size of allocation:size\n");
    scanf("%d",&size);
    x=(int*)malloc(size*sizeof(2));
    for(p=x;p>x-size;p--)
    {
        scanf("%d",&*p);
    }
}

