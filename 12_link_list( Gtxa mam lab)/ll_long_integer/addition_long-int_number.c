//addition of two long number//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *r1=NULL,*r2=NULL,*r3=NULL;
struct node *p,*f1,*f2;
void insert1(long v);
void insert2(long v);
void addition();
int pop();
struct node *getnode();
int main()
{
    int c,i=0,r;
    long v;
    while(i==0)
    {
        printf("\n1.insert_first number\n2.insert_second number\n3.addition of both");
        printf("\nenter your choice::");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nenter value::");
            scanf("%ld",&v);
            insert1(v);
            break;
       case 2:
            printf("\nenter value::");
            scanf("%ld",&v);
            insert2(v);
            break;
       case 3:
            addition();
            break;
        default:
            printf("\n*******enter valid number*******");
        }
    }
}
struct node *getnode()
{
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
};
void insert1(long v)
{
    int x;
    while(v>0)
    {
        x=v%10;
        v=v/10;
        p=getnode();
        p->info=x;
        if(r1==NULL)
        {
            r1=p;
            f1=p;
        }
        else
        {
            r1->next=p;
            r1=p;
        }
        printf("\n*****insert is %d",p->info);
    }
}
void insert2(long v)
{
    int x;
    while(v>0)
    {
        x=v%10;
        v=v/10;
        p=getnode();
        p->info=x;
        if(r2==NULL)
        {
            r2=p;
            f2=p;
        }
        else
        {
            r2->next=p;
            r2=p;
        }
        printf("\n*****insert is %d",p->info);
    }
}
void addition()
{
   while(f1!=NULL)
   {
       p=getnode();
       p->info=f1->info+f2->info;
       f1=f1->next;
       f2=f2->next;
       {
           if(r3==NULL)
            r3=p;
           else
           {
               p->next=r3;
               r3=p;
           }
       }

   }
   printf("\naddition done********\n");
   while(r3!=NULL)
   {
       printf("%d",r3->info);
       r3=r3->next;
   }
}


