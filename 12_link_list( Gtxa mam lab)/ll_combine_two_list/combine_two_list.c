//combine two list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct node *r1=NULL,*r2=NULL;
struct node *p,*f1,*f2;
void insert1(int v);
int pop1();
void insert2(int v);
int pop2();
void combine();
struct node *getnode();
int main()
{
    int c,i=0,v,r;
    while(i==0)
    {
        printf("\n1.insert into 1 \n2.insert into 2\n3.delete from 1\n4.delete from 2\n5.for combine list");
        printf("\nenter your choice");
        scanf("%d",&c);
        switch(c)
        {
          case 1:
              printf("\nenter value");
              scanf("%d",&v);
              insert1(v);
              break;
          case 2:
              printf("\nenter value");
              scanf("%d",&v);
              insert2(v);
              break;
          case 3:
              r=pop1();
              printf("\nr=%d",r);
              break;
          case 4:
              r=pop2();
              printf("\nr=%d",r);
              break;
          case 5:
              combine();
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
}
void insert1(int v)
{
  p=getnode();
  p->info=v;
  if(r1==NULL)
  {
      r1=p;
      f1=p;
      r1->next=r1;
  }
  else
  {
    r1->next=p;
    p->next=f1;
    r1=p;
  }
}
void insert2(int v)
{
  p=getnode();
  p->info=v;
  if(r2==NULL)
  {
      r2=p;
      f2=p;
      r2->next=r2;
  }
  else
  {
    r2->next=p;
    p->next=f2;
    r2=p;
  }
}
int pop1()
{
    int x;
    struct node *l;
    if(r1==NULL){
        printf("\n******node is note inserted*********\n");
        return -1;}
    else if(r1->next==r1)
    {
        x=r1->info;
        free(r1);
        r1=NULL;
        return x;
    }
    else
    {
     l=r1->next;
     x=l->info;
     f1=f1->next;
     free(l);
     return x;
    }
}
int pop2()
{
   int x;
    struct node *l;
    if(r2==NULL){
        printf("\n******node is note inserted*********\n");
        return -1;}
    else if(r2->next==r2)
    {
        x=r2->info;
        free(r2);
        r2=NULL;
        return x;
    }
    else
    {
     l=r2->next;
     x=l->info;
     f2=f2->next;
     free(l);
     return x;
    }
}
void combine()
{
    if(r1==NULL && r2==NULL)
       printf("\nempty");
    else if(r1==NULL)
       r1=f2;
    else if(r2==NULL)
        r2=f1;
    else
    {
        r1->next=f2;
        r2->next=f1;
    }
}
