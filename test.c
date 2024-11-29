#include<stdio.h>
int main()
{
    int n,customer_id;
    float bill;
    printf("Enter customer id = ");
    scanf("%d",&customer_id);
    printf("Enter units = ");
    scanf("%d",&n);
    if  (n <= 199 )
    {
        bill=n*1.20;
    }
    else if (n>=200 && n<400)
    {
        bill=n*1.50;
    }
    else if (n>=400 && n<600)
    {
        bill=n*1.80;
    }
    else 
    {
        bill=n*2;
    }
    if (n>400)
    {
        bill=bill+(bill)*0.15;
    }
    if (bill<100)
    {
        bill=100;
    }
    printf("%d %.2f",customer_id,bill);
       return 0;
}