#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter the value of x = ");
    fflush(stdin);
    int z = scanf("%d",&x);
    printf("%d",z);
    

    return 0;
}