#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10],s3[10],c[50];
    scanf("%s%s%s",s1,s2,s3);
    strcat(s1,s2);
    strcat(s1,s3);
    printf("s4=%s",s1);
}
