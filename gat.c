#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    printf("Enter the num1 : ");
    scanf("%d",&a);
    printf("Enter the num2 : ");
    scanf("%d",&b);
    printf("Enter the num3 : ");
    scanf("%d",&c);
    if(a>b && a>c)
    { 
        printf("a is the greatest number");
    }
    else if(b>c && b>a)
    {
        printf("b is the greatest number");
    }
    else if(c>a && c>b)
    {
        printf("c is the greatest number");
    }
    else
    {
        printf("Every number is equal");
    }
    return 0;
}