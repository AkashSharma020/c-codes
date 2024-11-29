#include<stdio.h>
#include<math.h>
int main()
{
    int n,digits=0;
    printf("Enter the number = ");
    scanf("%d",&n);
    while(n !=0)
    {
        n=n/10;
        digits++;
    }
    printf("Number of digits are %d",digits);
    return 0;
}