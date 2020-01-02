#include<stdio.h>
void push(int val);
int pop();
int peep();
void display();
int i,top=-1,p,val,s[50],ch=0,c;
int main()
{
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
s[++top]=val;
}
int pop()
{
int x;
x=s[top--];
return x;
}
int peep()
{
int x;
x=s[top];
return x;
}
void display()
{
int i;
for(i=top;i>-1;i--)
{
printf("\n%d",s[i]);
}
}
