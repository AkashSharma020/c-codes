#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int digits=(int)log10(n)+1;
    printf("Total no of digits = %d",digits);
    return 0;

}