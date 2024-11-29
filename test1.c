#include<stdio.h>
int main()
{
    int a,b,sum,subt,mult,div,rem;
    printf("ENter the two numbers = ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum of the two numbers = %d\n",sum);
    subt=a-b;
    printf("SUbtraction of thw two numbers = %d\n",subt);
    mult=a*b;
    printf("The product of two numbers = %d\n",mult);
    div=a/b;
    printf("The quotient of division of two numbers = %d\n",div);
    rem=a%b;
    printf("The remainder of division of two numbers= %d\n",rem);
}