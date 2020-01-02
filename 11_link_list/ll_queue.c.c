//link list as queue//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct node *r=NULL;
struct node *f;
struct node *p;
void insert(int v);
int pop();
void display();
int main()
{
    int c,i=0,v,r;
    while(i==0)
    {
        printf("\n1.insert\n2.delete\n3.display");
        printf("\nenter your choice");
        scanf("%d",&c);
        switch(c)
        {
          case 1:
              printf("\nenter value");
              scanf("%d",&v);
              insert(v);
              break;
          case 2:
              r=pop();
              printf("\nr=%d",r);
              break;
          case 3:
              display();
              break;
          default:
               printf("\nenter valid number");

        }
    }
return(0);
}
void insert(int v)
{
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    p->info=v;
   if(r==NULL)
   {
     r=p;
     f=p;
   }
   else
   {
      r->next=p;
      r=p;
   }
}
int pop()
{
    int x;
    if(r==NULL)
        printf("\nempty");
    else
    {
     p=f;
     x=f->info;
     f=f->next;
     free(p);
     return(x);
    }
}
void display()
{
    if(r==NULL)
        printf("\nempty");
    else
    {
        struct node *m;
        struct node *n;
        m=f;
        n=r;
        while(m!=NULL)
        {
            printf("\n%d",m->info);
            m=m->next;
        }
    }
}
