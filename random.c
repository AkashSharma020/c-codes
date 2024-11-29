#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int a;
    int b;
    int c;
    int d;
    int e;
    int sum;
    printf("Enter the value of a Five digit number ");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    e=n/10;
    printf("Sum of all digits of the five digit number = %d",a+b+c+d+e);
    return 0;
    
    
  
} 