#include<stdio.h>
int main()
{
    int n;
    printf("Enter the age of the Individual : ");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("The Individual is eligible for voting ");

    }
    else
    {
        printf("The Individual is a minor and not eligible for voting ");

    }
    return 0;

}