#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int digits = (int)log10(n)+1;
    int firstdigit= n/pow(10,digits-1);
    int lastdigit = n%10;
    int sum = firstdigit + lastdigit;
    printf("Sum of 1st digit and last digit = %d",sum);
    return 0;
}