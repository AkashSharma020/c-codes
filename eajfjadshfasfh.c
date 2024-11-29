#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,result;
    printf("Enter the value of base and power");
    scanf("%d %d",&a,&b);
    printf("Power = %d",(int)pow(a,b));
    return 0;
}