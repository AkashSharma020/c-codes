#include<stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    printf("Enter the first number X = ");
    scanf("%d",&a);
    printf("Enter the second number Y = ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("X=%d Y=%d",a,b);
    return 0;
}