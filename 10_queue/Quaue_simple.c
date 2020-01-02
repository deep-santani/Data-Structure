//simple quaue//
#include<stdio.h>
void insert(int x);
int revoke();
void empty();
struct quaue
{
    int a[10];
    int rear;
    int front;
}q;
int main()
{
    int i=0,c,x,y;
    (q.rear)=-1;
    (q.front)=0;
    while(i==0)
    {
      printf("\n1.insert\n2.remove\n3.empty\n");
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
       case 3:
            empty();
            break;
      }
      }
}
void insert(int x)
{
    if((q.rear)==10)
    {
        printf("\nquaue is full");
    }
    {
    q.a[++(q.rear)]=x;
    }
}
int revoke()
{
    int d;
    if((q.rear)==-1)
          {printf("\nunderflow:");}
    else
       {
           d=(q.a[(q.front)++]);
           return d;
       }
}
void empty()
{
    if((q.rear)==-1)
      {printf("\nquaue is empty");}
     else
     {printf("\nquaue is not empty");}

}
