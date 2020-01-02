//evaluation of postfix//
#include<stdio.h>
int top=-1;
char opstk[20],stk[20];
void push(char symb);
int rizalt(int op1,int op2,char symb);
int pop();
int main()
{
    int k=0,x,op1,op2;
    char symb;
    printf("enter postfix::");
    scanf("%s",opstk);
    while(opstk[k]!='\0')
    {
        symb=opstk[k];
        if(symb>47 && symb<58)
        {
            symb=symb-48;
            push(symb);
        }
        else
        {
            op1=pop();
            op2=pop();
            x=rizalt(op1,op2,symb);
            push(x);
        }
        k++;

    }
    printf("\nans=%d",x);

}
void push(char symb)
{
    if(top==19)
        printf("overflow");
    else
      stk[++top]=symb;
}
int pop()
{
   int c;
   if(top==-1)
       printf("underflow");
   else
      c=stk[top--];
   return(c);
}
int rizalt(int op1,int op2,char symb)
{
    int z;
    switch(symb)
    {
        case '+':return(op1+op2);
        case '-':return(op1-op2);
        case '*':return(op1*op2);
        case '/':return(op1/op2);
    }
}


