#include<stdio.h>
int main()
{
    int num,sum=0,rem;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num != 0)
    {
        rem = num%10;
        if(rem%2==0)
        {
        sum+=rem;
        }
        num=num/10;
    }
    printf("The sum of the even digits of the number = %d ",sum);
    return 0;
}