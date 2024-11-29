#include<stdio.h>
#include<math.h>
int main()
{
    float x1;
    float y1;
    float x2;
    float y2;
    float distance;
    printf("Enter the value of x coordinate of the first point ");
    scanf("%f",&x1);
    printf("Enter the valude of y coordinate of the first point ");
    scanf("%f",&y1);
    printf("Enter the value of x coordinate of the seccond point ");
    scanf("%f",&x2);
    printf("Enter the value of the y coordinate of the second point ");
    scanf("%f",&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    printf("The Euclidean distance between two points = %f",distance);
    return 0;
    
}