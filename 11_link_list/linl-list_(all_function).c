 //link list all function//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct node *r=NULL;
struct node *p,*f,*q,*z;
void normal_insert(int v);
int remove_from_first();
void insert_at_last();
void remove_from_last();
void insert_by_position(int pos);
void remove_by_position(int pos);
void display();
int b=0,d=0;
int main()
{
    int c,i=0,v,r,pos;
    while(i==0)
    {
        printf("\n1.normal_insert\n2.delete from first\n3.insert at last\n4.delete from last\n5.insert by position\n6.delete by position\n7.display");
        printf("\nenter your choice");
        scanf("%d",&c);
        switch(c)
        {
          case 1:
              printf("\nenter value");
              scanf("%d",&v);
              normal_insert(v);
              break;
          case 2:
              r=remove_from_first();
              printf("\nr=%d",r);
              break;
          case 3:
              insert_at_last();
          case 4:
              remove_from_last();
              break;
          case 5:
              printf("\nenter pos::");
              scanf("%d",&pos);
              insert_by_position(pos);
              break;
          case 6:
              printf("\nenter pos::");
              scanf("%d",&pos);
              remove_by_position(pos);
              break;
          case 7:
              display();
              break;
          default:
               printf("\n****************************enter valid number******************************");

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
void normal_insert(int v)
{
    b++;
    p=getnode();
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
int remove_from_first()
{
    if(r==NULL)
        printf("\nempty");
    else
    {
    int x;
    p=f;
    x=f->info;
    f=f->next;
    free(p);
    d++;
    return x;
    }
}
void display()
{
    if(r==NULL)
        printf("\nempty");
    else
        {
            struct node*l;
            l=f;
            int x;
            while(l!=NULL)
            {
                x=l->info;
                l=l->next;
                printf("\nx=%d",x);
            }
        }
}
void remove_from_last()
{
  if(b==0)
    printf("\nnod is not inserted*********\n");
  else{
  struct node *l;
  int x;
  l=f;
  q=l;
  p=l->next;
  while(p->next!=NULL)
  {
   p=p->next;
   q=q->next;
  }
  x=p->info;
  q->next=NULL;
  free(p);
  r=q;
  printf("\nx=%d",x); d++;
  }
}
void insert_at_last()
{
    if(b==0)
        printf("\nfirst node is note inserted****\n");
    else{
    int x;
    struct node *l;
    z=(struct node*)malloc(sizeof(struct node));
    z->next=NULL;
    printf("\nenter value x::");
    scanf("%d",&x);
    z->info=x;
    r->next=z;
    r=z; b++;
    }
}
void insert_by_position(int pos)
{
  int c=1,x;
  struct node *l;
  if(pos==1)
  {
    z=(struct node*)malloc(sizeof(struct node));
    printf("\nenter value x::");
    scanf("%d",&x);
    z->info=x;
    z->next=f;
    z=f; b++;
  }
  else if(b<=pos)
    printf("\n*** %d pos is not possible**\n",pos);
  else{
  l=f;
  q=l;
  p=l->next;
  while((pos-1)!=c)
  {
      p=p->next;
      q=q->next;
      c++;
  }
    z=(struct node*)malloc(sizeof(struct node));
    z->next=NULL;
    printf("\nenter value x::");
    scanf("%d",&x);
    z->info=x;

    q->next=z;
    z->next=p;  b++;
  }
}
void remove_by_position(int pos)
{
  int c=1,x;
  if(pos==1)
  {
      x=remove_from_first();
      printf("\nr=%d",x); d++;
  }
  else if(d>=pos)
    printf("\n ***  %d pos is not inserted**\n",pos);
  else{
  struct node *l;
  struct node *m;
  l=f;
  q=l;
  p=l->next;
  while((pos-1)!=c)
  {
      p=p->next;
      q=q->next;
      c++;
  }
  m=p;
  x=m->info;
  p=p->next;
  q->next=p;
  printf("x=%d",x);
  free(m); d++;
  }
}


