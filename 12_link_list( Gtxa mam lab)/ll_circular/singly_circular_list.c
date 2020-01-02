//singly_circular_list//
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
struct node *getnode();
int main()
{
    int c,i=0,v,r;
    while(i==0)
    {
        printf("\n1.insert\n2.delete");
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
          default:
               printf("\nenter valid number");
        }
    }
return(0);
}
struct node *getnode()
{
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
};
void insert(int v)
{
  p=getnode();
  p->info=v;
  if(r==NULL)
  {
      r=p;
      f=p;
      r->next=r;
  }
  else
  {
    r->next=p;
    p->next=f;
    r=p;
  }
}
int pop()
{
    int x;
    struct node *l;
    if(r==NULL){
        printf("\n******node is note inserted*********\n");
        return -1;}
    else if(r->next==r)
    {
        x=r->info;
        free(r);
        r=NULL;
        return x;
    }
    else
    {
     l=f;
     x=l->info;
     f=f->next;
     free(l);
     return x;
    }
}
