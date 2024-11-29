#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the 1st number : ");
    scanf("%d",&a);
    printf("\nEnter the 2nd number : ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("1st number is greater than the second one");
    }
    else
    {
        printf("\n2nd number is greater than the first one");
    }
    return 0;
}