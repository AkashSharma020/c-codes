#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of the number = ");
    scanf("%d",&n);
    for(int i=1; i<=10; i=i+1)
    {
        printf("%d ",n*i);
    }
    return 0;
}