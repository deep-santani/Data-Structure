#include<stdio.h>
struct student
{
    int e_no;
    char name[20];
    int maths,science;

}a[20];
int main()
{
    int sum=0,n,i;
    float avg;
    printf("enter N number of data");
    scanf("%d",&n);
    printf("enter e_no,name and marks of student");
    for(i=0;i<n;i++)
    {
        printf("\nenter e_no,name and maths & science marks of %d  student\n",i+1);
        scanf("%d%s%d%d",&a[i].e_no,a[i].name,&a[i].maths,&a[i].science);
    }
    printf("\ne_no\t\t\tname\t\t\tmaths_marks\t\tscience_marks");
    for(i=0;i<n;i++)
    {
        printf("\n%d\t\t\t%s\t\t\t%d\t\t\t%d",a[i].e_no,a[i].name,a[i].maths,a[i].science);
        sum=a[i].maths+a[i].science;
        avg=(sum/2);
        printf("\nsum=%d\navg=%f",sum,avg);

    }
}
