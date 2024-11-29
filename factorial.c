#include<stdio.h>
int main()
{
    int n,factorial=1;
    printf("Enter the number N = ");
    scanf("%d",&n);
    for(int i=n; i>=1; i=i--)
    {
        factorial = factorial*i;
        printf("%d",factorial);
    }
    return 0;
}