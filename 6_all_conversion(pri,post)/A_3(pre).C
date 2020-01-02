
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void push(char opr,int *a,char opstk[]);
char pop(int *a,char opstk[]);
int pri(char item);
int main()
{
	char opstk[20],poststring[20],sym,pq[20],eq[20],topstring[20];
	int i=0,top=-1,k=0,x,n;

	printf("\nenter equation :");
	scanf("%s",pq);
	n=strlen(pq);
	printf("\n%d",n);
	while(n>=0)
	{
      n--;
      eq[i]=pq[n];
      i++;
	}
	eq[i]='\0';
	printf("\n%s",eq);
    i=0;
	while(eq[k]!='\0')
	{
		sym=eq[k];
		if((sym>='A' && sym<='Z') || (sym>='a' && sym<='z'))
        {
            poststring[i]=sym;
            i++;
        }
        else if(eq[k]=='(')
        {
          sym=eq[k];
          push(sym,&top,opstk);
        }
        else if(eq[k]==')')
        {
         x=pop(&top,opstk);
         while(x!='(')
         {
          poststring[i]=x;
          i++;
          x=pop(&top,opstk);
         }
        }
        else
        {
            while(top!=-1 && pri(opstk[top])>= pri(sym))
            {

                poststring[i]=pop(&top,opstk);
                i++;
            }
            push(sym,&top,opstk);
        }
     k++;

	}

	while(top!=-1)
    {
        poststring[i]=pop(&top,opstk);
        i++;
    }
    poststring[i]='\0';
    i=0;
    n=strlen(poststring);
        while(n>=0)
	   {
            n--;
            topstring[i]=poststring[n];
            i++;
	   }

	topstring[i]='\0';
	printf("\n%s",topstring);
}




void push(char opr,int *a,char opstk[])
{
	*a=*a+1;
	opstk[*a]=opr;
}
char pop(int *a,char opstk[])
{
	char ch;
	ch=opstk[*a];
	*a=*a-1;
	return ch;
}
int pri(char item )
{
    if(item=='(')
        return 0;
    if(item=='+'||item=='-')
        return 1;
    if(item=='*'||item=='/')
        return 2;
    if(item=='$')
        return 3;
}

