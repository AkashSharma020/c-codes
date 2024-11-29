#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>=0 && n<=9)
    {
        printf("It is a single digit number");

    }
    else if(n>=10 && n<=99)
    {
        printf("It is a double digit number");
    }
    else if(n>=100 && n<=999)
    {
        printf("It is a triple digit number");
    }
    else 
    {
        printf("It is a more than three digit number");
    }
    return 0;
}