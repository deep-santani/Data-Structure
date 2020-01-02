//stack by local declaration//
#include<stdio.h>
void push(int val,int *a,int s[]);
int pop(int *a,int s[]);
int peep(int *a,int s[]);
void display(int *a,int s[]);
int main()
{
  int i,top=-1,p,val,s[50],ch=0,c;

    while(ch==0)
    {
        printf("\nEnter choice :");
        printf("\n1.push \n2.pop \n3.peep \n4.display");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
            printf("\nEnter value :");
            scanf("%d",&p);
            push(p,&top,s);
            break;

        case 2:
            val=pop(&top,s);
            printf("\n%d",val);
            break;

        case 3:
            val=peep(&top,s);
            printf("\n%d",val);
            break;

        case 4:
            display(&top,s);
            break;

        default :
            printf("\nenter valid !");
            break;
        }
         printf("\nWant to do again ?(0/1) :");
         scanf("%d",&ch);
    }
return 0;
}
void push(int val,int *a,int s[])
{
    s[*a+1]=val;
    *a=*a+1;
}

int pop(int *a,int s[])
{
    int x;
    x=s[*a];
    *a=*a-1;
    return x;
}

int peep(int *a,int s[])
{
    int x;
    x=s[*a];
    return x;
}

void display(int *a,int s[])
{
    int i;
    for(i=*a;i>-1;i--)
      printf("\n%d",s[i]);
}
