//link list as stack//
#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *next;
};
struct node *list='\0';
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
        printf("\nenter your choice  ");
        scanf("%d",&c);
        switch(c)
        {
          case 1:
              printf("\nenter value  ");
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
               printf("\nenter valid number  ");

        }
    }
return(0);
}
void insert(int v)
{
    p=(struct node*)malloc(sizeof(struct node));
    p->next='\0';
    p->info=v;
   if(list=='\0')
     list=p;
   else
   {
       p->next=list;
       list=p;
   }
}
int pop()
{
    int x;
    p=list;
    x=list->info;
    list=list->next;
    free(p);
    return x;
}
void display()
{
    struct node *q;
    q=list;
    while(q!=NULL)
    {
        printf("\n%d",q->info);
        q=q->next;
    }

}

