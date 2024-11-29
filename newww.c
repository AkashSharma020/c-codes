#include<stdio.h>
#include<math.h>
int main()
{
    int x=5;
    int y=x++ + x++;
    printf("x=%d y=%d",x,y);
    return 0;
}