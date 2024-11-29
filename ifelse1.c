#include<stdio.h>
int main()
{
    int n, cube;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n>0)
    {
        cube = n*n*n;
        printf("Cube = %d",cube);
    }
    else
    {
        printf("Square = %d",n*n);
    }
    return 0;
    
}