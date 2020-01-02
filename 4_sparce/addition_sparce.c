//addition of sparce of matrix//
#include<stdio.h>
struct sparce
{
  int r,c,v;
}s[25];
int main()
{
 int a[5][5],b[5][5],d[5][5],r,c,v,i,j,k=0;
 printf("\nenter row and colume u want to creat sparce");
 scanf("%d%d",&r,&c);
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         printf("a[%d][%d]=",i,j);
         scanf("%d",&a[i][j]);
         printf("b[%d][%d]=",i,j);
         scanf("%d",&b[i][j]);
     }
 }
 for(i=0;i<r;i++)
 {
     for(j=0;j<c;j++)
     {
         d[i][j]=a[i][j]+b[i][j];
         printf("d[%d][%d]=%d\t",i,j,d[i][j]);
         if(d[i][j]!=0)
       {
        s[k].r=i;
        s[k].c=j;
        s[k].v=d[i][j];
        k++;
     }
     }
     printf("\n");
 }
  printf("r\tc\tv \n");
  printf("%d\t%d\t%d\n",r,c,k);
  k=0;
  for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
      {
       if(s[k].r==i && s[k].c==j)
         {
          printf("%d\t%d\t%d\n",i,j,d[i][j]);
          k++;
          }
      }
   }
}


