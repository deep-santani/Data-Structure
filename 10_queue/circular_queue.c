//circular queue//
#include<stdio.h>
void insert(int x);
int revoke();
int rear=4,front=4,size=5,a[5];
int main()
{
    int i=0,c,x,y;
    while(i==0)
    {
      printf("\n1.insert\n2.delete\n");
      printf("enter your choice::");
      scanf("%d",&c);
      switch(c)
      {
       case 1:
            printf("\nenter value you want to insert::");
            scanf("%d",&x);
            insert(x);
            break;
       case 2:
            y=revoke();
            printf("%d",y);
            break;
       default :
             printf("\nplease enter valid num::");
             break;
      }
    }
return 0;
}
void insert(int x)
{
    if(front==rear+1)
        printf("\noverflow");
    else
    {
        if(rear==size-1)
            rear=0;
        else
            rear=rear+1;
        a[rear]=x;
    }
}
int revoke()
{
    int d;
    if(rear==front)
        printf("\nunderflow");
    else
    {
        if(front==size-1)
            front=0;
        else
            front=front+1;
        d=a[front];
    }
return d;
}


