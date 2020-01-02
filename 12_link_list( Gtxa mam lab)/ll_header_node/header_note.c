//header node in link list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct header
{
    int info;
    struct node *first;
    struct node *next;
}*h;
struct node *r='\0';
struct node *f;
struct node *p;
void insert(int v);
struct node *getnode();
int pop();
int main()
{
    int c,i=0,v,r,B;
    h=(struct header*)malloc(sizeof(struct header));
    printf("\nplese enter header name\n");
    scanf("%d",B);
    h->info=B;
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
               printf("\n************************enter valid choice*******************\n");
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
      h->first=r;
      h->next=p;
      f=p;
  }
  else
  {
      r->next=p;
      r=p;
      h->first=r;
  }
}
int pop()
{
    int x;
    struct node *l;
    l=f;
    x=f->info;
    f=f->next;
    h->next=f;
    free(l);
    return x;
}
