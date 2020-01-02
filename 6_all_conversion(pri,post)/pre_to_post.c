//prifix to postfix conversion//
#include<stdio.h>
#include<string.h>
int top=-1;
char opstk[50],pri[50],post[50],i=0,n,j=0;
void push(char k[]);
char pop();
char join(char op1[],char op2[],char sym);
int main()
{
    char eq[50],op1[50],op2[50],sym;
    printf("enter prifix string:::");
    scanf("%s",eq);
    n=strlen(eq);
	while(n>=0)
	{
      n--;
      pri[i]=eq[n];
      i++;
	}
    printf("\n%s",pri);
    i=0;
    while(pri[i]!='\0')
    {
        sym=pri[i];
        if((sym>='A' && sym<='Z') || (sym>='a' && sym<='z'))
        {
            push(sym);
        }
        else
        {
            op1[j]=pop();
            op2[j]=pop();
            join(op1,op2,sym);
        }
    }
}
void push(char k[])
{
    opstk[top++]=k;
}
char pop()
{
    char c[50];
    c[50]=opstk[--top];
    return(c[50]);
}
char join(char op1[],char op2[],char sym)
{
    strcat(op1,op2);
    strcat(op1,sym);
    push(op1);
}
