//stack using_circular_list//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct node *top=NULL;
struct node *p,*first;
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
    if(top==NULL){
        top=p;
        first=p;
        first->next=first;
    }
    else
    {
        p->next=top;
        top=p;
        first->next=p;
    }
}
int pop()
{
    int x;
    if(top==NULL){
        printf("\n******node is not inserted******");
        return -1;
    }
    /*else if(top->next=first)
    {
      x=top->info;
      free(p);
      top=NULL;
      return x;
    }*/
    else{
        p=top;
        x=top->info;
        top=top->next;
        free(p);
        return x;
    }
}
