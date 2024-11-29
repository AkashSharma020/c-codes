#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,avg;
    printf("Enter the marks in sub1 : ");
    scanf("%d",&s1);
    printf("Enter the marks in sub2 :  ");
    scanf("%d",&s2);
    printf("Enter the marks in sub3 :  ");
    scanf("%d",&s3);
     printf("Enter the marks in sub4 : ");
     scanf("%d",&s4);
    printf("Enter the marks in sub5 :  ");
    scanf("%d",&s5);
    avg=(s1+s2+s3+s4+s5)/5;
    if(avg>=90)
    {
        printf("A+");
    }
    else if(avg>=80 && avg<=90)
    {
        printf("A");
    }
    else if(avg>=70 && avg<=80)
    {
        printf("B+");
    }
    else if(avg>=60 && avg<=70)
    {
        printf("B");
    }
    else if(avg>=50 && avg<=60)
    {
        printf("C");
    }
    else
    {
        printf("Fail");
    }
    return 0;






}