#include<stdio.h>
int main()
{
    int b;
    int h;
    int area;
    printf("Enter the base of triangle ");
    scanf("%d",&b);
    printf("Enter the height of triangle ");
    scanf("%d",&h);
    area=0.5*b*h;
    printf("Area of triangle = %d",area);
    return 0;
}