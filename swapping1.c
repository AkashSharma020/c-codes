#include<stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    printf("Enter first number ");
    scanf("%d",&a);
    printf("Enter second number ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d ",a,b);
    return 0;
}