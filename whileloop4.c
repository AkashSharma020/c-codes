#include<stdio.h>
int main()
{
    int num,sum=0,rem,i=1,num1=0;
    printf("Enter the number = ");
    scanf("%d",&num);
    while(num != 0)
    {
        rem = num%10;
        if(rem%2 !=0)
        {
            num1=num1+rem*i;
            i=i*10;
             
        }
        
        num=num/10;
    }
    printf("%d",num1);
    return 0;
} 