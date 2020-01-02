//stack by structure//
#include<stdio.h>
struct stack
{
 int s[50];
 int top;
}a;
void push(int val);
int pop();
int peep();
void display();
int i,p,val,ch=0,c;
int main()
{
  a.top=-1;

 while(ch==0)
 {
    printf("\nEnter choice :");
    printf("\n1.push \n2.pop \n3.peep \n4.display");
    scanf("%d",&c);
   switch(c)
   {
       case 1:
       printf("\nEnter value:");
       scanf("%d",&p);
       push(p);
       break;
       case 2:
       val=pop();
       printf("\n%d",val);
       break;
       case 3:
       val=peep();
       printf("\n%d",val);
       break;
       case 4:
       display();
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
void push(int val)
{
  a.s[++(a.top)]=val;
}
int pop()
{
  int x;
  x=a.s[(a.top)--];
  return x;
}
int peep()
{
  int x;
  x=a.s[(a.top)];
  return x;
}
 void display()
{
  int i;
  for(i=a.top;i>-1;i--)
     printf("\n%d",a.s[i]);
}
