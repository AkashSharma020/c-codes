#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int digits = (int)log10(n)+1;
    int firstdigit= n/pow(10,digits-1);
    n = n%(int)pow(10,digits-1);
    int lastdigit = n%10;
    n=n/10;
    n=lastdigit*pow(10,digits-1) +n*10 + firstdigit;
    printf("After swapping number is %d",n);

    
    return 0;
}
