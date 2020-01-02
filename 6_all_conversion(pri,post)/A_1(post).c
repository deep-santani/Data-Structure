#include<stdio.h>
void push(char opr,int *a,char opstk[]);
char pop(int *a,char opstk[]);
int pri(char item);
int main()
{
	char opstk[20],poststring[20],sym,eq[20];
	int i=0,j,top=-1,k=0;

	printf("\nenter equation :");
	scanf("%s",eq);

	while(eq[k]!='\0')
	{
		sym=eq[k];
		if((sym>='A' && sym<='Z') || (sym>='a' && sym<='z'))
        {
            poststring[i]=sym;
            i++;
        }
        else
        {

            while(top!=-1 &&  pri(opstk[top])>= pri(sym))
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
    printf("\n%s",poststring);
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
