#include<stdio.h>
int main()
{
    itn pin;
    printf("Enter the pin = ");
    int z= scanf("%d",&pin);
    if(z==0)
      goto abc;
      printf("Your pin is = %d",pin);

    return 0;
}