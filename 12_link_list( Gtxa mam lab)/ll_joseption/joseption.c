//joseption problem//
#include<stdio.h>
#include<stdlib.h>
struct node
{
    char info;
    struct node* next;
};
struct node *getnode();
void insert(char ch);
 void joseption();
struct node *p,*r=NULL,*f,*q,*l;
int main()
{
    int i=0,c;
    char ch;
    while(i==0)
    {
        printf("\n1.insert\n2.joseption");
        printf("\nyour choie");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nenter char");
            scanf("%c",&ch);
            insert(ch);
            break;
        case 2:
            joseption();
            break;
        default:
            printf("\nenter valid num");
        }
    }
}
struct node *getnode()
{
    p=(struct node*)malloc(sizeof(struct node));
    p->next=NULL;
    return p;
}
void insert(char ch)
{
    p=getnode();
    p->info=ch;
    if(r==NULL)
    {
        r=p;
        r->next=r;
        f=p;
    }
    else
    {
        r->next=p;
        r=p;
        r->next=f;
    }
    printf("%c",r->info);
}
 void joseption()
 {
     int z=1,n;
     char m,c,x;
     printf("\nchoose 0any element random::::");
     scanf("%c",&m);
     printf("\nenter any position random::::");
     scanf("%d",&n);
   while(r->info!=m)
   {
       r=r->next;
   }
   q=r;
   p=r->next;
   while(r->next!=r)
   {
       while(z!=n)
       {
           p=p->next;
           q=q->next;
           z++;
       }
       l=p;
       x=l->info;
       p=p->next;
       q->next=p;
       r=q;
       free(l);
       z=1;
       printf("\n%c",x);
   }
 }
